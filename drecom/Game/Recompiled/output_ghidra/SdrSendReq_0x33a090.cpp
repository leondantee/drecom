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

// Function: SdrSendReq
// Address: 0x33a090 - 0x33a27c
void SdrSendReq_0x33a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrSendReq_0x33a090");
#endif

    switch (ctx->pc) {
        case 0x33a0c0u: goto label_33a0c0;
        case 0x33a0e4u: goto label_33a0e4;
        case 0x33a0f4u: goto label_33a0f4;
        case 0x33a10cu: goto label_33a10c;
        case 0x33a124u: goto label_33a124;
        case 0x33a20cu: goto label_33a20c;
        case 0x33a224u: goto label_33a224;
        case 0x33a234u: goto label_33a234;
        case 0x33a260u: goto label_33a260;
        default: break;
    }

    ctx->pc = 0x33a090u;

    // 0x33a090: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33a090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33a094: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x33a094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x33a098: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33a098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33a09c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33a09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x33a0a0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x33a0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x33a0a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a0a8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33A0A8u;
    {
        const bool branch_taken_0x33a0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a0a8) {
            ctx->pc = 0x33A0D4u;
            goto label_33a0d4;
        }
    }
    ctx->pc = 0x33A0B0u;
    // 0x33a0b0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33a0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33a0b4: 0x8c249a10  lw          $a0, -0x65F0($at)
    ctx->pc = 0x33a0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A9A10u));
    // 0x33a0b8: 0xc084a9c  jal         func_212A70
    ctx->pc = 0x33A0B8u;
    SET_GPR_U32(ctx, 31, 0x33A0C0u);
    ctx->pc = 0x212A70u;
    {
        ctx->pc = 0x33A0C0u;
        ps2_syscalls::PollSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A0C0u) { return; }
    ctx->pc = 0x33A0C0u;
label_33a0c0:
    // 0x33a0c0: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33A0C0u;
    {
        const bool branch_taken_0x33a0c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x33a0c0) {
            ctx->pc = 0x33A0E4u;
            goto label_33a0e4;
        }
    }
    ctx->pc = 0x33A0C8u;
    // 0x33a0c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33a0cc: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x33A0CCu;
    {
        const bool branch_taken_0x33a0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a0cc) {
            ctx->pc = 0x33A264u;
            goto label_33a264;
        }
    }
    ctx->pc = 0x33A0D4u;
label_33a0d4:
    // 0x33a0d4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33a0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33a0d8: 0x8c249a10  lw          $a0, -0x65F0($at)
    ctx->pc = 0x33a0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A9A10u));
    // 0x33a0dc: 0xc084a98  jal         func_212A60
    ctx->pc = 0x33A0DCu;
    SET_GPR_U32(ctx, 31, 0x33A0E4u);
    ctx->pc = 0x212A60u;
    {
        ctx->pc = 0x33A0E4u;
        ps2_syscalls::WaitSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A0E4u) { return; }
    ctx->pc = 0x33A0E4u;
label_33a0e4:
    // 0x33a0e4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a0e8: 0x8c305430  lw          $s0, 0x5430($at)
    ctx->pc = 0x33a0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x895430u));
    // 0x33a0ec: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x33A0ECu;
    {
        const bool branch_taken_0x33a0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a0ec) {
            ctx->pc = 0x33A168u;
            goto label_33a168;
        }
    }
    ctx->pc = 0x33A0F4u;
label_33a0f4:
    // 0x33a0f4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x33a0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33a0f8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a0fc: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x33a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x33a100: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x33a100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a104: 0xc0cead4  jal         func_33AB50
    ctx->pc = 0x33A104u;
    SET_GPR_U32(ctx, 31, 0x33A10Cu);
    ctx->pc = 0x33AB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB50u, 0x33A104u, 0x33A10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A10Cu;
label_33a10c:
    // 0x33a10c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33A10Cu;
    {
        const bool branch_taken_0x33a10c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x33a10c) {
            ctx->pc = 0x33A12Cu;
            goto label_33a12c;
        }
    }
    ctx->pc = 0x33A114u;
    // 0x33a114: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33a114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33a118: 0x24442790  addiu       $a0, $v0, 0x2790
    ctx->pc = 0x33a118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10128));
    // 0x33a11c: 0xc046760  jal         func_119D80
    ctx->pc = 0x33A11Cu;
    SET_GPR_U32(ctx, 31, 0x33A124u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x33A124u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A124u) { return; }
    ctx->pc = 0x33A124u;
label_33a124:
    // 0x33a124: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x33A124u;
    {
        const bool branch_taken_0x33a124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a124) {
            ctx->pc = 0x33A188u;
            goto label_33a188;
        }
    }
    ctx->pc = 0x33A12Cu;
label_33a12c:
    // 0x33a12c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x33a12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33a130: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x33a130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33a134: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a138: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x33a138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x33a13c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a140: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x33a140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x33a144: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33a144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x33a148: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x33a148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33a14c: 0x3202001f  andi        $v0, $s0, 0x1F
    ctx->pc = 0x33a14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x33a150: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A150u;
    {
        const bool branch_taken_0x33a150 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x33a150) {
            ctx->pc = 0x33A164u;
            goto label_33a164;
        }
    }
    ctx->pc = 0x33A158u;
    // 0x33a158: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33A158u;
    {
        const bool branch_taken_0x33a158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a158) {
            ctx->pc = 0x33A164u;
            goto label_33a164;
        }
    }
    ctx->pc = 0x33A160u;
    // 0x33a160: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x33a160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_33a164:
    // 0x33a164: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x33a164u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_33a168:
    // 0x33a168: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x33a168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33a16c: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a170: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x33a170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x33a174: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a178: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33a17c: 0x441ffdd  bgez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x33A17Cu;
    {
        const bool branch_taken_0x33a17c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x33a17c) {
            ctx->pc = 0x33A0F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a0f4;
        }
    }
    ctx->pc = 0x33A184u;
    // 0x33a184: 0x0  nop
    ctx->pc = 0x33a184u;
    // NOP
label_33a188:
    // 0x33a188: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a18c: 0xac305430  sw          $s0, 0x5430($at)
    ctx->pc = 0x33a18cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x895430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895430u, _value); } while (0);
    // 0x33a190: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a194: 0x8c225440  lw          $v0, 0x5440($at)
    ctx->pc = 0x33a194u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895440u));
    // 0x33a198: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x33A198u;
    {
        const bool branch_taken_0x33a198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a198) {
            ctx->pc = 0x33A250u;
            goto label_33a250;
        }
    }
    ctx->pc = 0x33A1A0u;
    // 0x33a1a0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a1a4: 0x8c225440  lw          $v0, 0x5440($at)
    ctx->pc = 0x33a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895440u));
    // 0x33a1a8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x33a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x33a1ac: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x33a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x33a1b0: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x33a1b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33a1b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a1b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A1B8u;
    {
        const bool branch_taken_0x33a1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a1b8) {
            ctx->pc = 0x33A1C8u;
            goto label_33a1c8;
        }
    }
    ctx->pc = 0x33A1C0u;
    // 0x33a1c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33a1c4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x33a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_33a1c8:
    // 0x33a1c8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33a1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33a1cc: 0x8c229a10  lw          $v0, -0x65F0($at)
    ctx->pc = 0x33a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A9A10u));
    // 0x33a1d0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x33a1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x33a1d4: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x33a1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a1d8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a1dc: 0x244750c0  addiu       $a3, $v0, 0x50C0
    ctx->pc = 0x33a1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33a1e0: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a1e4: 0x244950c0  addiu       $t1, $v0, 0x50C0
    ctx->pc = 0x33a1e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33a1e8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x33a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x33a1ec: 0x244ba280  addiu       $t3, $v0, -0x5D80
    ctx->pc = 0x33a1ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943360));
    // 0x33a1f0: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a1f4: 0x244452d0  addiu       $a0, $v0, 0x52D0
    ctx->pc = 0x33a1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21200));
    // 0x33a1f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x33a1f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33a1fc: 0x72204628  paddub      $t0, $s1, $zero
    ctx->pc = 0x33a1fcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x33a200: 0x70005628  paddub      $t2, $zero, $zero
    ctx->pc = 0x33a200u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33a204: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x33A204u;
    SET_GPR_U32(ctx, 31, 0x33A20Cu);
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x33A20Cu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A20Cu) { return; }
    ctx->pc = 0x33A20Cu;
label_33a20c:
    // 0x33a20c: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x33A20Cu;
    {
        const bool branch_taken_0x33a20c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x33a20c) {
            ctx->pc = 0x33A240u;
            goto label_33a240;
        }
    }
    ctx->pc = 0x33A214u;
    // 0x33a214: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33a214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33a218: 0x244427f0  addiu       $a0, $v0, 0x27F0
    ctx->pc = 0x33a218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10224));
    // 0x33a21c: 0xc046760  jal         func_119D80
    ctx->pc = 0x33A21Cu;
    SET_GPR_U32(ctx, 31, 0x33A224u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x33A224u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A224u) { return; }
    ctx->pc = 0x33A224u;
label_33a224:
    // 0x33a224: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33a224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33a228: 0x8c249a10  lw          $a0, -0x65F0($at)
    ctx->pc = 0x33a228u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A9A10u));
    // 0x33a22c: 0xc084a90  jal         func_212A40
    ctx->pc = 0x33A22Cu;
    SET_GPR_U32(ctx, 31, 0x33A234u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x33A234u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A234u) { return; }
    ctx->pc = 0x33A234u;
label_33a234:
    // 0x33a234: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33a234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33a238: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x33A238u;
    {
        const bool branch_taken_0x33a238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a238) {
            ctx->pc = 0x33A264u;
            goto label_33a264;
        }
    }
    ctx->pc = 0x33A240u;
label_33a240:
    // 0x33a240: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a244: 0xac205440  sw          $zero, 0x5440($at)
    ctx->pc = 0x33a244u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x895440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895440u, _value); } while (0);
    // 0x33a248: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33A248u;
    {
        const bool branch_taken_0x33a248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a248) {
            ctx->pc = 0x33A260u;
            goto label_33a260;
        }
    }
    ctx->pc = 0x33A250u;
label_33a250:
    // 0x33a250: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33a250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33a254: 0x8c249a10  lw          $a0, -0x65F0($at)
    ctx->pc = 0x33a254u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A9A10u));
    // 0x33a258: 0xc084a90  jal         func_212A40
    ctx->pc = 0x33A258u;
    SET_GPR_U32(ctx, 31, 0x33A260u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x33A260u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A260u) { return; }
    ctx->pc = 0x33A260u;
label_33a260:
    // 0x33a260: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33a260u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33a264:
    // 0x33a264: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x33a264u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33a268: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33a268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33a26c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x33a26cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33a270: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x33a270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33a274: 0x3e00008  jr          $ra
    ctx->pc = 0x33A274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A27Cu;
}
