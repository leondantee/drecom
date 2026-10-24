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

// Function: Em00_R1_hit_tail_f
// Address: 0x2d2fb0 - 0x2d3070
void Em00_R1_hit_tail_f_0x2d2fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_hit_tail_f_0x2d2fb0");
#endif

    switch (ctx->pc) {
        case 0x2d3004u: goto label_2d3004;
        case 0x2d3020u: goto label_2d3020;
        default: break;
    }

    ctx->pc = 0x2d2fb0u;

    // 0x2d2fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d2fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d2fb4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d2fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d2fb8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d2fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d2fbc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2fc0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d2fc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d2fc4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d2fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d2fc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d2fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2fcc: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D2FCCu;
    {
        const bool branch_taken_0x2d2fcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d2fcc) {
            ctx->pc = 0x2D3014u;
            goto label_2d3014;
        }
    }
    ctx->pc = 0x2D2FD4u;
    // 0x2d2fd4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2FD4u;
    {
        const bool branch_taken_0x2d2fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2fd4) {
            ctx->pc = 0x2D2FE4u;
            goto label_2d2fe4;
        }
    }
    ctx->pc = 0x2D2FDCu;
    // 0x2d2fdc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2D2FDCu;
    {
        const bool branch_taken_0x2d2fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2fdc) {
            ctx->pc = 0x2D3060u;
            goto label_2d3060;
        }
    }
    ctx->pc = 0x2D2FE4u;
label_2d2fe4:
    // 0x2d2fe4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2fe8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2fec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d2fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d2ff0: 0x24063c15  addiu       $a2, $zero, 0x3C15
    ctx->pc = 0x2d2ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15381));
    // 0x2d2ff4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d2ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2ff8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d2ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d2ffc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D2FFCu;
    SET_GPR_U32(ctx, 31, 0x2D3004u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D2FFCu, 0x2D3004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3004u;
label_2d3004:
    // 0x2d3004: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3008: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d3008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d300c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d300cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3010: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d3010u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d3014:
    // 0x2d3014: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3018: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D3018u;
    SET_GPR_U32(ctx, 31, 0x2D3020u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D3018u, 0x2D3020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3020u;
label_2d3020:
    // 0x2d3020: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3024: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d3024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d3028: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D3028u;
    {
        const bool branch_taken_0x2d3028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3028) {
            ctx->pc = 0x2D3060u;
            goto label_2d3060;
        }
    }
    ctx->pc = 0x2D3030u;
    // 0x2d3030: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d3030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3034: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3038: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d3038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d303c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d303cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3040: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3044: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d3044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d3048: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d304c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d304cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3050: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3054: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d3054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3058: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d305c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d305cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d3060:
    // 0x2d3060: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d3060u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3064: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d3064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d3068: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3070u;
}
