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

// Function: entry_001eb974
// Address: 0x1eb974 - 0x1eba90
void entry_001eb974_0x1eb974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eb974_0x1eb974");
#endif

    switch (ctx->pc) {
        case 0x1eb9c4u: goto label_1eb9c4;
        case 0x1eb9ecu: goto label_1eb9ec;
        default: break;
    }

    ctx->pc = 0x1eb974u;

label_1eb974:
    // 0x1eb974: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x1eb974u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1eb978: 0x7a640010  lq          $a0, 0x10($s3)
    ctx->pc = 0x1eb978u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1eb97c: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1eb97cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1eb980: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1eb980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1eb984: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x1eb984u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x1eb988: 0x7ca40010  sq          $a0, 0x10($a1)
    ctx->pc = 0x1eb988u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 4));
    // 0x1eb98c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1eb98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1eb990: 0x1c40fff8  bgtz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1EB990u;
    {
        const bool branch_taken_0x1eb990 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1eb990) {
            ctx->pc = 0x1EB974u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb974;
        }
    }
    ctx->pc = 0x1EB998u;
    // 0x1eb998: 0xc6670000  lwc1        $f7, 0x0($s3)
    ctx->pc = 0x1eb998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1eb99c: 0xe4a70000  swc1        $f7, 0x0($a1)
    ctx->pc = 0x1eb99cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1eb9a0: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x1eb9a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb9a4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb9a8: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x1eb9a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x1eb9ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1eb9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eb9b0: 0x30460080  andi        $a2, $v0, 0x80
    ctx->pc = 0x1eb9b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1eb9b4: 0x2504027c  addiu       $a0, $t0, 0x27C
    ctx->pc = 0x1eb9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 636));
    // 0x1eb9b8: 0x24050a40  addiu       $a1, $zero, 0xA40
    ctx->pc = 0x1eb9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2624));
    // 0x1eb9bc: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x1EB9BCu;
    SET_GPR_U32(ctx, 31, 0x1EB9C4u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x1EB9BCu, 0x1EB9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB9C4u;
label_1eb9c4:
    // 0x1eb9c4: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1eb9c4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb9c8: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x1eb9c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1eb9cc: 0x26c20a40  addiu       $v0, $s6, 0xA40
    ctx->pc = 0x1eb9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 2624));
    // 0x1eb9d0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1eb9d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb9d4: 0xdfa60110  ld          $a2, 0x110($sp)
    ctx->pc = 0x1eb9d4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1eb9d8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1eb9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1eb9dc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1eb9dcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb9e0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1eb9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb9e4: 0xc0754a4  jal         func_1D5290
    ctx->pc = 0x1EB9E4u;
    SET_GPR_U32(ctx, 31, 0x1EB9ECu);
    ctx->pc = 0x1D5290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5290u, 0x1EB9E4u, 0x1EB9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB9ECu;
label_1eb9ec:
    // 0x1eb9ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1eb9ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb9f0: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eb9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb9f4: 0x8ca6027c  lw          $a2, 0x27C($a1)
    ctx->pc = 0x1eb9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 636)));
    // 0x1eb9f8: 0x70c0b628  paddub      $s6, $a2, $zero
    ctx->pc = 0x1eb9f8u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1eb9fc: 0x3c080005  lui         $t0, 0x5
    ctx->pc = 0x1eb9fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)5 << 16));
    // 0x1eba00: 0x35073001  ori         $a3, $t0, 0x3001
    ctx->pc = 0x1eba00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)12289);
    // 0x1eba04: 0xfec70030  sd          $a3, 0x30($s6)
    ctx->pc = 0x1eba04u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 48), GPR_U64(ctx, 7));
    // 0x1eba08: 0x3c04312e  lui         $a0, 0x312E
    ctx->pc = 0x1eba08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12590 << 16));
    // 0x1eba0c: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x1eba0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1eba10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1eba10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1eba14: 0x34068028  ori         $a2, $zero, 0x8028
    ctx->pc = 0x1eba14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x1eba18: 0xc32025  or          $a0, $a2, $v1
    ctx->pc = 0x1eba18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1eba1c: 0xfec40070  sd          $a0, 0x70($s6)
    ctx->pc = 0x1eba1cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 112), GPR_U64(ctx, 4));
    // 0x1eba20: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eba20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eba24: 0x8cb10280  lw          $s1, 0x280($a1)
    ctx->pc = 0x1eba24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 640)));
    // 0x1eba28: 0x7220b628  paddub      $s6, $s1, $zero
    ctx->pc = 0x1eba28u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1eba2c: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x1eba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x1eba30: 0x34633001  ori         $v1, $v1, 0x3001
    ctx->pc = 0x1eba30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12289);
    // 0x1eba34: 0xfec30030  sd          $v1, 0x30($s6)
    ctx->pc = 0x1eba34u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 48), GPR_U64(ctx, 3));
    // 0x1eba38: 0x3c06312e  lui         $a2, 0x312E
    ctx->pc = 0x1eba38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12590 << 16));
    // 0x1eba3c: 0x34c54000  ori         $a1, $a2, 0x4000
    ctx->pc = 0x1eba3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x1eba40: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x1eba40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1eba44: 0x34038028  ori         $v1, $zero, 0x8028
    ctx->pc = 0x1eba44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x1eba48: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1eba48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1eba4c: 0xfec40070  sd          $a0, 0x70($s6)
    ctx->pc = 0x1eba4cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 112), GPR_U64(ctx, 4));
    // 0x1eba50: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eba50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eba54: 0x90a31308  lbu         $v1, 0x1308($a1)
    ctx->pc = 0x1eba54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4872)));
    // 0x1eba58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1eba58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1eba5c: 0x30660080  andi        $a2, $v1, 0x80
    ctx->pc = 0x1eba5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1eba60: 0x14c0006f  bnez        $a2, . + 4 + (0x6F << 2)
    ctx->pc = 0x1EBA60u;
    {
        const bool branch_taken_0x1eba60 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eba60) {
            ctx->pc = 0x1EBC20u;
            return;
        }
    }
    ctx->pc = 0x1EBA68u;
    // 0x1eba68: 0x32e4ffff  andi        $a0, $s7, 0xFFFF
    ctx->pc = 0x1eba68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x1eba6c: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x1eba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1eba70: 0x14850007  bne         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EBA70u;
    {
        const bool branch_taken_0x1eba70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1eba70) {
            ctx->pc = 0x1EBA90u;
            return;
        }
    }
    ctx->pc = 0x1EBA78u;
    // 0x1eba78: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x1eba78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eba7c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1eba7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1eba80: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1eba80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eba84: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x1eba84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1eba88: 0xc09620c  jal         func_258830
    ctx->pc = 0x1EBA88u;
    SET_GPR_U32(ctx, 31, 0x1EBA90u);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x1EBA88u, 0x1EBA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBA90u;
}
