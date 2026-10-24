#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001fb738
// Address: 0x1fb738 - 0x1fb7a0
void entry_001fb738_0x1fb738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb738_0x1fb738");
#endif

    ctx->pc = 0x1fb738u;

    // 0x1fb738: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb73c: 0x9085034f  lbu         $a1, 0x34F($a0)
    ctx->pc = 0x1fb73cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 847)));
    // 0x1fb740: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1fb740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fb744: 0x240500fe  addiu       $a1, $zero, 0xFE
    ctx->pc = 0x1fb744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1fb748: 0x14650015  bne         $v1, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FB748u;
    {
        const bool branch_taken_0x1fb748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1fb748) {
            ctx->pc = 0x1FB7A0u;
            return;
        }
    }
    ctx->pc = 0x1FB750u;
    // 0x1fb750: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb754: 0x3c053f75  lui         $a1, 0x3F75
    ctx->pc = 0x1fb754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16245 << 16));
    // 0x1fb758: 0x34a4c28f  ori         $a0, $a1, 0xC28F
    ctx->pc = 0x1fb758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49807);
    // 0x1fb75c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1fb75cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb760: 0xc46002dc  lwc1        $f0, 0x2DC($v1)
    ctx->pc = 0x1fb760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb764: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fb764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fb768: 0xe46002dc  swc1        $f0, 0x2DC($v1)
    ctx->pc = 0x1fb768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 732), bits); }
    // 0x1fb76c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1fb76cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb770: 0x8cc30364  lw          $v1, 0x364($a2)
    ctx->pc = 0x1fb770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 868)));
    // 0x1fb774: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fb774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fb778: 0xacc30364  sw          $v1, 0x364($a2)
    ctx->pc = 0x1fb778u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 868), GPR_U32(ctx, 3));
    // 0x1fb77c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb780: 0x8c730364  lw          $s3, 0x364($v1)
    ctx->pc = 0x1fb780u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 868)));
    // 0x1fb784: 0x166000e4  bnez        $s3, . + 4 + (0xE4 << 2)
    ctx->pc = 0x1FB784u;
    {
        const bool branch_taken_0x1fb784 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb784) {
            ctx->pc = 0x1FBB18u;
            return;
        }
    }
    ctx->pc = 0x1FB78Cu;
    // 0x1fb78c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fb78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fb790: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb794: 0xac640358  sw          $a0, 0x358($v1)
    ctx->pc = 0x1fb794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 4));
    // 0x1fb798: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x1FB798u;
    {
        const bool branch_taken_0x1fb798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb798) {
            ctx->pc = 0x1FBB38u;
            return;
        }
    }
    ctx->pc = 0x1FB7A0u;
}
