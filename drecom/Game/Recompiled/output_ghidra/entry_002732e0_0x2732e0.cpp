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

// Function: entry_002732e0
// Address: 0x2732e0 - 0x273358
void entry_002732e0_0x2732e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002732e0_0x2732e0");
#endif

    switch (ctx->pc) {
        case 0x273354u: goto label_273354;
        default: break;
    }

    ctx->pc = 0x2732e0u;

    // 0x2732e0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2732e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2732e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2732e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2732e8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2732e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2732ec: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2732ECu;
    {
        const bool branch_taken_0x2732ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2732ec) {
            ctx->pc = 0x273358u;
            return;
        }
    }
    ctx->pc = 0x2732F4u;
    // 0x2732f4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2732f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2732f8: 0x8c30bb4c  lw          $s0, -0x44B4($at)
    ctx->pc = 0x2732f8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x2732fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2732fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x273300: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x273300u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x273304: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x273304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x273308: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x273308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27330c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27330cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273310: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x273310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x273314: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x273314u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x273318: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x273318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27331c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27331cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x273320: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x273320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x273324: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x273324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x273328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27332c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x27332cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x273330: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x273330u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x273334: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x273334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x273338: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x273338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27333c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x27333cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x273340: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x273340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x273344: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x273344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x273348: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x273348u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27334c: 0xc0b3ef8  jal         func_2CFBE0
    ctx->pc = 0x27334Cu;
    SET_GPR_U32(ctx, 31, 0x273354u);
    ctx->pc = 0x2CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBE0u, 0x27334Cu, 0x273354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273354u;
label_273354:
    // 0x273354: 0x0  nop
    ctx->pc = 0x273354u;
    // NOP
    ctx->pc = 0x273358u;
}
