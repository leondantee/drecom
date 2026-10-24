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

// Function: entry_0030bb48
// Address: 0x30bb48 - 0x30bcc0
void entry_0030bb48_0x30bb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030bb48_0x30bb48");
#endif

    switch (ctx->pc) {
        case 0x30bb7cu: goto label_30bb7c;
        case 0x30bb98u: goto label_30bb98;
        case 0x30bbb4u: goto label_30bbb4;
        case 0x30bc04u: goto label_30bc04;
        case 0x30bc20u: goto label_30bc20;
        case 0x30bc3cu: goto label_30bc3c;
        default: break;
    }

    ctx->pc = 0x30bb48u;

    // 0x30bb48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bb4c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30bb50: 0x24420430  addiu       $v0, $v0, 0x430
    ctx->pc = 0x30bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
    // 0x30bb54: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x30bb54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30bb58: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x30bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bb5c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x30bb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x30bb60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bb64: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30bb68: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30bb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bb6c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30bb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bb70: 0x244603f0  addiu       $a2, $v0, 0x3F0
    ctx->pc = 0x30bb70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x30bb74: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x30BB74u;
    SET_GPR_U32(ctx, 31, 0x30BB7Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x30BB74u, 0x30BB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BB7Cu;
label_30bb7c:
    // 0x30bb7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bb80: 0x24421358  addiu       $v0, $v0, 0x1358
    ctx->pc = 0x30bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4952));
    // 0x30bb84: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30bb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bb88: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30bb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bb8c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x30bb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30bb90: 0xc0675c4  jal         func_19D710
    ctx->pc = 0x30BB90u;
    SET_GPR_U32(ctx, 31, 0x30BB98u);
    ctx->pc = 0x19D710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D710u, 0x30BB90u, 0x30BB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BB98u;
label_30bb98:
    // 0x30bb98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bb9c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30bba0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30bba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bba4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30bba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bba8: 0x244603f0  addiu       $a2, $v0, 0x3F0
    ctx->pc = 0x30bba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x30bbac: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x30BBACu;
    SET_GPR_U32(ctx, 31, 0x30BBB4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x30BBACu, 0x30BBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BBB4u;
label_30bbb4:
    // 0x30bbb4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x30bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bbb8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x30bbb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30bbbc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bbc0: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x30bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x30bbc4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30bbc8: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x30bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x30bbcc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x30bbccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x30bbd0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bbd4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30bbd8: 0x244204b0  addiu       $v0, $v0, 0x4B0
    ctx->pc = 0x30bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x30bbdc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x30bbdcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30bbe0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x30bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bbe4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x30bbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x30bbe8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bbec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30bbf0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30bbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bbf4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30bbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bbf8: 0x24460470  addiu       $a2, $v0, 0x470
    ctx->pc = 0x30bbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1136));
    // 0x30bbfc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x30BBFCu;
    SET_GPR_U32(ctx, 31, 0x30BC04u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x30BBFCu, 0x30BC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BC04u;
label_30bc04:
    // 0x30bc04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bc08: 0x24421358  addiu       $v0, $v0, 0x1358
    ctx->pc = 0x30bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4952));
    // 0x30bc0c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30bc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bc10: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30bc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bc14: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x30bc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30bc18: 0xc0675c4  jal         func_19D710
    ctx->pc = 0x30BC18u;
    SET_GPR_U32(ctx, 31, 0x30BC20u);
    ctx->pc = 0x19D710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D710u, 0x30BC18u, 0x30BC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BC20u;
label_30bc20:
    // 0x30bc20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bc24: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30bc28: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30bc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bc2c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30bc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bc30: 0x24460470  addiu       $a2, $v0, 0x470
    ctx->pc = 0x30bc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1136));
    // 0x30bc34: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x30BC34u;
    SET_GPR_U32(ctx, 31, 0x30BC3Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x30BC34u, 0x30BC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BC3Cu;
label_30bc3c:
    // 0x30bc3c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x30bc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30bc40: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x30bc40u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bc44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bc48: 0x24631354  addiu       $v1, $v1, 0x1354
    ctx->pc = 0x30bc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4948));
    // 0x30bc4c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x30bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bc50: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x30bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x30bc54: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x30bc54u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x30bc58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bc5c: 0x24631348  addiu       $v1, $v1, 0x1348
    ctx->pc = 0x30bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4936));
    // 0x30bc60: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x30bc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bc64: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x30bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x30bc68: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x30bc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x30bc6c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30bc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30bc70: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x30bc70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x30bc74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bc78: 0x24631350  addiu       $v1, $v1, 0x1350
    ctx->pc = 0x30bc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4944));
    // 0x30bc7c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x30bc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bc80: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x30bc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x30bc84: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x30bc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x30bc88: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30bc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30bc8c: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x30bc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x30bc90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30bc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bc94: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x30bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x30bc98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30bc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bc9c: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x30bc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x30bca0: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x30bca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x30bca4: 0xac83020c  sw          $v1, 0x20C($a0)
    ctx->pc = 0x30bca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 3));
    // 0x30bca8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bcac: 0x24631354  addiu       $v1, $v1, 0x1354
    ctx->pc = 0x30bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4948));
    // 0x30bcb0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30bcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30bcb4: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x30bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x30bcb8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x30bcb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x30bcbc: 0xac83020c  sw          $v1, 0x20C($a0)
    ctx->pc = 0x30bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 3));
    ctx->pc = 0x30bcc0u;
}
