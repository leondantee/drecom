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

// Function: entry_0029cbe4
// Address: 0x29cbe4 - 0x29cc40
void entry_0029cbe4_0x29cbe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029cbe4_0x29cbe4");
#endif

    switch (ctx->pc) {
        case 0x29cbf4u: goto label_29cbf4;
        case 0x29cc0cu: goto label_29cc0c;
        case 0x29cc24u: goto label_29cc24;
        default: break;
    }

    ctx->pc = 0x29cbe4u;

    // 0x29cbe4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x29cbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29cbe8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x29cbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29cbec: 0xc040c8c  jal         func_103230
    ctx->pc = 0x29CBECu;
    SET_GPR_U32(ctx, 31, 0x29CBF4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x29CBF4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29CBF4u) { return; }
    ctx->pc = 0x29CBF4u;
label_29cbf4:
    // 0x29cbf4: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x29cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x29cbf8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29cbf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29cbfc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x29cbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29cc00: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x29cc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29cc04: 0xc040c60  jal         func_103180
    ctx->pc = 0x29CC04u;
    SET_GPR_U32(ctx, 31, 0x29CC0Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29CC0Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29CC0Cu) { return; }
    ctx->pc = 0x29CC0Cu;
label_29cc0c:
    // 0x29cc0c: 0x26240190  addiu       $a0, $s1, 0x190
    ctx->pc = 0x29cc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x29cc10: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x29cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x29cc14: 0x2445adb0  addiu       $a1, $v0, -0x5250
    ctx->pc = 0x29cc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946224));
    // 0x29cc18: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x29cc18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29cc1c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29CC1Cu;
    SET_GPR_U32(ctx, 31, 0x29CC24u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29CC24u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29CC24u) { return; }
    ctx->pc = 0x29CC24u;
label_29cc24:
    // 0x29cc24: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29CC24u;
    {
        const bool branch_taken_0x29cc24 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x29cc24) {
            ctx->pc = 0x29CC40u;
            return;
        }
    }
    ctx->pc = 0x29CC2Cu;
    // 0x29cc2c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x29cc2cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29cc30: 0x0  nop
    ctx->pc = 0x29cc30u;
    // NOP
    // 0x29cc34: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x29cc34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x29cc38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29CC38u;
    {
        const bool branch_taken_0x29cc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cc38) {
            ctx->pc = 0x29CC5Cu;
            return;
        }
    }
    ctx->pc = 0x29CC40u;
}
