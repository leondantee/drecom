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

// Function: entry_002db47c
// Address: 0x2db47c - 0x2db4f4
void entry_002db47c_0x2db47c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002db47c_0x2db47c");
#endif

    switch (ctx->pc) {
        case 0x2db4acu: goto label_2db4ac;
        default: break;
    }

    ctx->pc = 0x2db47cu;

    // 0x2db47c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db480: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2db480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db484: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x2db484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x2db488: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2db488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2db48c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2db48cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db490: 0x0  nop
    ctx->pc = 0x2db490u;
    // NOP
    // 0x2db494: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2db494u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db498: 0x0  nop
    ctx->pc = 0x2db498u;
    // NOP
    // 0x2db49c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x2DB49Cu;
    {
        const bool branch_taken_0x2db49c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db49c) {
            ctx->pc = 0x2DB52Cu;
            return;
        }
    }
    ctx->pc = 0x2DB4A4u;
    // 0x2db4a4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DB4A4u;
    SET_GPR_U32(ctx, 31, 0x2DB4ACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DB4A4u, 0x2DB4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB4ACu;
label_2db4ac:
    // 0x2db4ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2db4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db4b0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2db4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2db4b4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DB4B4u;
    {
        const bool branch_taken_0x2db4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db4b4) {
            ctx->pc = 0x2DB4F4u;
            return;
        }
    }
    ctx->pc = 0x2DB4BCu;
    // 0x2db4bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db4c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db4c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db4c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2db4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2db4cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db4d0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db4d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db4d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db4dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db4e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db4e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db4e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db4ec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2DB4ECu;
    {
        const bool branch_taken_0x2db4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db4ec) {
            ctx->pc = 0x2DB524u;
            return;
        }
    }
    ctx->pc = 0x2DB4F4u;
}
