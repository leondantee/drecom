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

// Function: entry_002734c8
// Address: 0x2734c8 - 0x273540
void entry_002734c8_0x2734c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002734c8_0x2734c8");
#endif

    switch (ctx->pc) {
        case 0x27353cu: goto label_27353c;
        default: break;
    }

    ctx->pc = 0x2734c8u;

    // 0x2734c8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2734c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2734cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2734ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2734d0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2734d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2734d4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2734D4u;
    {
        const bool branch_taken_0x2734d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2734d4) {
            ctx->pc = 0x273540u;
            return;
        }
    }
    ctx->pc = 0x2734DCu;
    // 0x2734dc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2734dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2734e0: 0x8c30bb4c  lw          $s0, -0x44B4($at)
    ctx->pc = 0x2734e0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x2734e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2734e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2734e8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2734e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2734ec: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2734ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2734f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2734f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2734f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2734f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2734f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2734f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2734fc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2734fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x273500: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x273500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x273504: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x273504u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x273508: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x273508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27350c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27350cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273510: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x273510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273514: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x273514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x273518: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x273518u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x27351c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27351cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x273520: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x273520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x273524: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x273524u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x273528: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x273528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27352c: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x27352cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x273530: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x273530u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x273534: 0xc0b3ef8  jal         func_2CFBE0
    ctx->pc = 0x273534u;
    SET_GPR_U32(ctx, 31, 0x27353Cu);
    ctx->pc = 0x2CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBE0u, 0x273534u, 0x27353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27353Cu;
label_27353c:
    // 0x27353c: 0x0  nop
    ctx->pc = 0x27353cu;
    // NOP
    ctx->pc = 0x273540u;
}
