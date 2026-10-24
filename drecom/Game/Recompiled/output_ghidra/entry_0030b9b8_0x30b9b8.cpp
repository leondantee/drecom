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

// Function: entry_0030b9b8
// Address: 0x30b9b8 - 0x30bb48
void entry_0030b9b8_0x30b9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030b9b8_0x30b9b8");
#endif

    switch (ctx->pc) {
        case 0x30b9fcu: goto label_30b9fc;
        case 0x30ba18u: goto label_30ba18;
        case 0x30ba34u: goto label_30ba34;
        case 0x30ba84u: goto label_30ba84;
        case 0x30baa0u: goto label_30baa0;
        case 0x30babcu: goto label_30babc;
        default: break;
    }

    ctx->pc = 0x30b9b8u;

    // 0x30b9b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30b9bc: 0x8c421360  lw          $v0, 0x1360($v0)
    ctx->pc = 0x30b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4960)));
    // 0x30b9c0: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x30B9C0u;
    {
        const bool branch_taken_0x30b9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b9c0) {
            ctx->pc = 0x30BB48u;
            return;
        }
    }
    ctx->pc = 0x30B9C8u;
    // 0x30b9c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30b9cc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30b9d0: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x30b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x30b9d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x30b9d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30b9d8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x30b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b9dc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x30b9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x30b9e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30b9e4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30b9e8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30b9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b9ec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30b9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b9f0: 0x244603b0  addiu       $a2, $v0, 0x3B0
    ctx->pc = 0x30b9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 944));
    // 0x30b9f4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x30B9F4u;
    SET_GPR_U32(ctx, 31, 0x30B9FCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x30B9F4u, 0x30B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B9FCu;
label_30b9fc:
    // 0x30b9fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ba00: 0x24421358  addiu       $v0, $v0, 0x1358
    ctx->pc = 0x30ba00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4952));
    // 0x30ba04: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30ba04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30ba08: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30ba08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30ba0c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x30ba0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30ba10: 0xc0675c4  jal         func_19D710
    ctx->pc = 0x30BA10u;
    SET_GPR_U32(ctx, 31, 0x30BA18u);
    ctx->pc = 0x19D710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D710u, 0x30BA10u, 0x30BA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BA18u;
label_30ba18:
    // 0x30ba18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ba1c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30ba20: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30ba20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30ba24: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30ba24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30ba28: 0x244603b0  addiu       $a2, $v0, 0x3B0
    ctx->pc = 0x30ba28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 944));
    // 0x30ba2c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x30BA2Cu;
    SET_GPR_U32(ctx, 31, 0x30BA34u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x30BA2Cu, 0x30BA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BA34u;
label_30ba34:
    // 0x30ba34: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x30ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30ba38: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x30ba38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30ba3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ba40: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x30ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x30ba44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30ba48: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x30ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x30ba4c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x30ba4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x30ba50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ba54: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30ba58: 0x24420470  addiu       $v0, $v0, 0x470
    ctx->pc = 0x30ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1136));
    // 0x30ba5c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x30ba5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30ba60: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x30ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30ba64: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x30ba64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x30ba68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ba6c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30ba70: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30ba70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30ba74: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30ba74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30ba78: 0x24460430  addiu       $a2, $v0, 0x430
    ctx->pc = 0x30ba78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
    // 0x30ba7c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x30BA7Cu;
    SET_GPR_U32(ctx, 31, 0x30BA84u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x30BA7Cu, 0x30BA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BA84u;
label_30ba84:
    // 0x30ba84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ba88: 0x24421358  addiu       $v0, $v0, 0x1358
    ctx->pc = 0x30ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4952));
    // 0x30ba8c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30ba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30ba90: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30ba90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30ba94: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x30ba94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30ba98: 0xc0675c4  jal         func_19D710
    ctx->pc = 0x30BA98u;
    SET_GPR_U32(ctx, 31, 0x30BAA0u);
    ctx->pc = 0x19D710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D710u, 0x30BA98u, 0x30BAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BAA0u;
label_30baa0:
    // 0x30baa0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30baa4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30baa8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30baa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30baac: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30baacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bab0: 0x24460430  addiu       $a2, $v0, 0x430
    ctx->pc = 0x30bab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
    // 0x30bab4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x30BAB4u;
    SET_GPR_U32(ctx, 31, 0x30BABCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x30BAB4u, 0x30BABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BABCu;
label_30babc:
    // 0x30babc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x30babcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bac0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x30bac0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bac4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30bac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bac8: 0x24631350  addiu       $v1, $v1, 0x1350
    ctx->pc = 0x30bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4944));
    // 0x30bacc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x30baccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bad0: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x30bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x30bad4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x30bad4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x30bad8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30badc: 0x24631348  addiu       $v1, $v1, 0x1348
    ctx->pc = 0x30badcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4936));
    // 0x30bae0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bae4: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x30bae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x30bae8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x30bae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x30baec: 0xac83020c  sw          $v1, 0x20C($a0)
    ctx->pc = 0x30baecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 3));
    // 0x30baf0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30baf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30baf4: 0x24631350  addiu       $v1, $v1, 0x1350
    ctx->pc = 0x30baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4944));
    // 0x30baf8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30baf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bafc: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x30bafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x30bb00: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x30bb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x30bb04: 0xac83020c  sw          $v1, 0x20C($a0)
    ctx->pc = 0x30bb04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 3));
    // 0x30bb08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bb0c: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x30bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x30bb10: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x30bb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bb14: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x30bb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x30bb18: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x30bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x30bb1c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30bb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30bb20: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x30bb20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x30bb24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bb28: 0x24631354  addiu       $v1, $v1, 0x1354
    ctx->pc = 0x30bb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4948));
    // 0x30bb2c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x30bb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bb30: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x30bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x30bb34: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x30bb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x30bb38: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30bb38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30bb3c: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x30bb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x30bb40: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x30BB40u;
    {
        const bool branch_taken_0x30bb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bb40) {
            ctx->pc = 0x30BCC0u;
            return;
        }
    }
    ctx->pc = 0x30BB48u;
}
