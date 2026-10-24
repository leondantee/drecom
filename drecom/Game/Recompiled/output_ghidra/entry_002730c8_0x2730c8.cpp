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

// Function: entry_002730c8
// Address: 0x2730c8 - 0x273140
void entry_002730c8_0x2730c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002730c8_0x2730c8");
#endif

    switch (ctx->pc) {
        case 0x27313cu: goto label_27313c;
        default: break;
    }

    ctx->pc = 0x2730c8u;

    // 0x2730c8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2730c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2730cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2730ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2730d0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2730d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2730d4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2730D4u;
    {
        const bool branch_taken_0x2730d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2730d4) {
            ctx->pc = 0x273140u;
            return;
        }
    }
    ctx->pc = 0x2730DCu;
    // 0x2730dc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2730dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2730e0: 0x8c30bb4c  lw          $s0, -0x44B4($at)
    ctx->pc = 0x2730e0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x2730e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2730e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2730e8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2730e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2730ec: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2730ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2730f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2730f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2730f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2730f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2730f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2730f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2730fc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2730fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x273100: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x273100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x273104: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x273104u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x273108: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x273108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27310c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27310cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x273110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273114: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x273114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x273118: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x273118u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x27311c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27311cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x273120: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x273120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x273124: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x273124u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x273128: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x273128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27312c: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x27312cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x273130: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x273130u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x273134: 0xc0b3ef8  jal         func_2CFBE0
    ctx->pc = 0x273134u;
    SET_GPR_U32(ctx, 31, 0x27313Cu);
    ctx->pc = 0x2CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBE0u, 0x273134u, 0x27313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27313Cu;
label_27313c:
    // 0x27313c: 0x0  nop
    ctx->pc = 0x27313cu;
    // NOP
    ctx->pc = 0x273140u;
}
