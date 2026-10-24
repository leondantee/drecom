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

// Function: entry_0027b1b8
// Address: 0x27b1b8 - 0x27b274
void entry_0027b1b8_0x27b1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027b1b8_0x27b1b8");
#endif

    switch (ctx->pc) {
        case 0x27b1dcu: goto label_27b1dc;
        case 0x27b1e8u: goto label_27b1e8;
        case 0x27b260u: goto label_27b260;
        case 0x27b26cu: goto label_27b26c;
        default: break;
    }

    ctx->pc = 0x27b1b8u;

    // 0x27b1b8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27b1bc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27b1c0: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x27b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x27b1c4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27b1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b1c8: 0x24045702  addiu       $a0, $zero, 0x5702
    ctx->pc = 0x27b1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22274));
    // 0x27b1cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27b1ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27b1d0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27b1d0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27b1d4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27B1D4u;
    SET_GPR_U32(ctx, 31, 0x27B1DCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27B1D4u, 0x27B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B1DCu;
label_27b1dc:
    // 0x27b1dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27b1dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27b1e0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27B1E0u;
    SET_GPR_U32(ctx, 31, 0x27B1E8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27B1E0u, 0x27B1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B1E8u;
label_27b1e8:
    // 0x27b1e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27b1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27b1ec: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27b1f0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27b1f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27b1f4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27b1f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b1fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27b1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27b200: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x27b200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27b204: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27b204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27b208: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27b208u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27b20c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27b20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27b210: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27b210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27b214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27b214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b218: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x27b218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x27b21c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x27b21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x27b220: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27b220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27b224: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27b224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27b228: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x27b228u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27b22c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27b22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27b230: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27b230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27b234: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27B234u;
    {
        const bool branch_taken_0x27b234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b234) {
            ctx->pc = 0x27B274u;
            return;
        }
    }
    ctx->pc = 0x27B23Cu;
    // 0x27b23c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27b240: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27b240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27b244: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x27b244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x27b248: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27b248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b24c: 0x24047304  addiu       $a0, $zero, 0x7304
    ctx->pc = 0x27b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29444));
    // 0x27b250: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27b250u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27b254: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27b254u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27b258: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27B258u;
    SET_GPR_U32(ctx, 31, 0x27B260u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27B258u, 0x27B260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B260u;
label_27b260:
    // 0x27b260: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27b260u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27b264: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27B264u;
    SET_GPR_U32(ctx, 31, 0x27B26Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27B264u, 0x27B26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B26Cu;
label_27b26c:
    // 0x27b26c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x27B26Cu;
    {
        const bool branch_taken_0x27b26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b26c) {
            ctx->pc = 0x27B320u;
            return;
        }
    }
    ctx->pc = 0x27B274u;
}
