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

// Function: entry_0019a5cc
// Address: 0x19a5cc - 0x19a69c
void entry_0019a5cc_0x19a5cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a5cc_0x19a5cc");
#endif

    switch (ctx->pc) {
        case 0x19a658u: goto label_19a658;
        case 0x19a674u: goto label_19a674;
        default: break;
    }

    ctx->pc = 0x19a5ccu;

    // 0x19a5cc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x19a5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x19a5d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19a5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x19a5d4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x19a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x19a5d8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19a5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19a5dc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19a5e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19a5e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19a5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19a5e8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x19a5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19a5ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19a5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x19a5f0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x19a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x19a5f4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19a5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19a5f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19a5fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19a600: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x19a600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x19a604: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x19a604u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x19a608: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19a608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19a60c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19a60cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x19a610: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x19a610u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x19a614: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19a614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19a618: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19a618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19a61c: 0x304b00ff  andi        $t3, $v0, 0xFF
    ctx->pc = 0x19a61cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19a620: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19a620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a624: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19a624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19a628: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x19a628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19a62c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x19a62cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19a630: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x19a630u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19a634: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a638: 0x2449d2f0  addiu       $t1, $v0, -0x2D10
    ctx->pc = 0x19a638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x19a63c: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x19a63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19a640: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a644: 0xc42dd360  lwc1        $f13, -0x2CA0($at)
    ctx->pc = 0x19a644u;
    { uint32_t bits = FAST_READ32(0x5CD360u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19a648: 0xc7ae0078  lwc1        $f14, 0x78($sp)
    ctx->pc = 0x19a648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x19a64c: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x19a64cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19a650: 0xc0bb544  jal         func_2ED510
    ctx->pc = 0x19A650u;
    SET_GPR_U32(ctx, 31, 0x19A658u);
    ctx->pc = 0x2ED510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED510u, 0x19A650u, 0x19A658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A658u;
label_19a658:
    // 0x19a658: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a65c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x19a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x19a660: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x19a660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19a664: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x19a664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x19a668: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x19a668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19a66c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x19A66Cu;
    SET_GPR_U32(ctx, 31, 0x19A674u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x19A674u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19A674u) { return; }
    ctx->pc = 0x19A674u;
label_19a674:
    // 0x19a674: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x19a674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19a678: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19a678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19a67c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a680: 0x2442d2f0  addiu       $v0, $v0, -0x2D10
    ctx->pc = 0x19a680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x19a684: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x19a684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x19a688: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19a688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a68c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x19a68cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19a690: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x19a690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19a694: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x19A694u;
    SET_GPR_U32(ctx, 31, 0x19A69Cu);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x19A694u, 0x19A69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A69Cu;
}
