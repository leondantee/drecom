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

// Function: entry_001fc5ec
// Address: 0x1fc5ec - 0x1fc65c
void entry_001fc5ec_0x1fc5ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc5ec_0x1fc5ec");
#endif

    switch (ctx->pc) {
        case 0x1fc634u: goto label_1fc634;
        case 0x1fc64cu: goto label_1fc64c;
        default: break;
    }

    ctx->pc = 0x1fc5ecu;

    // 0x1fc5ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc5f0: 0x90420343  lbu         $v0, 0x343($v0)
    ctx->pc = 0x1fc5f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 835)));
    // 0x1fc5f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc5f8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1fc5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1fc5fc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FC5FCu;
    {
        const bool branch_taken_0x1fc5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc5fc) {
            ctx->pc = 0x1FC65Cu;
            return;
        }
    }
    ctx->pc = 0x1FC604u;
    // 0x1fc604: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc608: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x1fc608u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x1fc60c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fc60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fc610: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fc610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fc614: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FC614u;
    {
        const bool branch_taken_0x1fc614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc614) {
            ctx->pc = 0x1FC65Cu;
            return;
        }
    }
    ctx->pc = 0x1FC61Cu;
    // 0x1fc61c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc620: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc624: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x1fc624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1fc628: 0x8c450320  lw          $a1, 0x320($v0)
    ctx->pc = 0x1fc628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x1fc62c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FC62Cu;
    SET_GPR_U32(ctx, 31, 0x1FC634u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FC634u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC634u) { return; }
    ctx->pc = 0x1FC634u;
label_1fc634:
    // 0x1fc634: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc638: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1fc638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc63c: 0x24450380  addiu       $a1, $v0, 0x380
    ctx->pc = 0x1fc63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x1fc640: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1fc640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc644: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FC644u;
    SET_GPR_U32(ctx, 31, 0x1FC64Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FC64Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC64Cu) { return; }
    ctx->pc = 0x1FC64Cu;
label_1fc64c:
    // 0x1fc64c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fc64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fc650: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc654: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc658: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1fc658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->pc = 0x1fc65cu;
}
