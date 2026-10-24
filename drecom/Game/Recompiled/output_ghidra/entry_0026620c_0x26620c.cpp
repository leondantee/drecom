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

// Function: entry_0026620c
// Address: 0x26620c - 0x266320
void entry_0026620c_0x26620c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026620c_0x26620c");
#endif

    switch (ctx->pc) {
        case 0x266254u: goto label_266254;
        case 0x2662b4u: goto label_2662b4;
        default: break;
    }

    ctx->pc = 0x26620cu;

    // 0x26620c: 0x8fb00078  lw          $s0, 0x78($sp)
    ctx->pc = 0x26620cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x266210: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x266210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x266214: 0x8c23fca4  lw          $v1, -0x35C($at)
    ctx->pc = 0x266214u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FCA4u));
    // 0x266218: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x266218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x26621c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26621cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266220: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x266220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x266224: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x266224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x266228: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x266228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x26622c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x26622cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266230: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x266230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x266234: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x266234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x266238: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26623c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26623cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266240: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x266240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266244: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x266244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x266248: 0x244415ac  addiu       $a0, $v0, 0x15AC
    ctx->pc = 0x266248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5548));
    // 0x26624c: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x26624Cu;
    SET_GPR_U32(ctx, 31, 0x266254u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x26624Cu, 0x266254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266254u;
label_266254:
    // 0x266254: 0x8e920008  lw          $s2, 0x8($s4)
    ctx->pc = 0x266254u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x266258: 0x72409e28  paddub      $s3, $s2, $zero
    ctx->pc = 0x266258u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x26625c: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x26625cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x266260: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x266260u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x266264: 0x3c021300  lui         $v0, 0x1300
    ctx->pc = 0x266264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4864 << 16));
    // 0x266268: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x266268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x26626c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x26626cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x266270: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x266270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x266274: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x266274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x266278: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x266278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26627c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x26627cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x266280: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x266280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x266284: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x266284u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x266288: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x266288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x26628c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x26628cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x266290: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x266290u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x266294: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x266294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x266298: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x266298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x26629c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x26629cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2662a0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2662a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2662a4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2662a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2662a8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2662a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2662ac: 0xc07465c  jal         func_1D1970
    ctx->pc = 0x2662ACu;
    SET_GPR_U32(ctx, 31, 0x2662B4u);
    ctx->pc = 0x1D1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1970u, 0x2662ACu, 0x2662B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2662B4u;
label_2662b4:
    // 0x2662b4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2662b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2662b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2662b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2662bc: 0x8c23fca4  lw          $v1, -0x35C($at)
    ctx->pc = 0x2662bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FCA4u));
    // 0x2662c0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2662c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2662c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2662c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2662c8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2662c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2662cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2662ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2662d0: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x2662d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x2662d4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2662d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2662d8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x2662d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2662dc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2662dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2662e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2662e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2662e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2662e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2662e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2662e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2662ec: 0xac5015ac  sw          $s0, 0x15AC($v0)
    ctx->pc = 0x2662ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5548), GPR_U32(ctx, 16));
    // 0x2662f0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x2662f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x2662f4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2662f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2662f8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2662f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2662fc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2662fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x266300: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x266300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x266304: 0x2603000f  addiu       $v1, $s0, 0xF
    ctx->pc = 0x266304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x266308: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x266308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x26630c: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x26630cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x266310: 0xafb00078  sw          $s0, 0x78($sp)
    ctx->pc = 0x266310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 16));
    // 0x266314: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x266314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x266318: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x266318u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26631c: 0x0  nop
    ctx->pc = 0x26631cu;
    // NOP
    ctx->pc = 0x266320u;
}
