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

// Function: entry_001eba90
// Address: 0x1eba90 - 0x1ebbf0
void entry_001eba90_0x1eba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eba90_0x1eba90");
#endif

    switch (ctx->pc) {
        case 0x1ebae8u: goto label_1ebae8;
        case 0x1ebb58u: goto label_1ebb58;
        case 0x1ebbc0u: goto label_1ebbc0;
        default: break;
    }

    ctx->pc = 0x1eba90u;

    // 0x1eba90: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1eba90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1eba94: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x1eba94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x1eba98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1eba98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1eba9c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1eba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1ebaa0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ebaa0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1ebaa4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1ebaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1ebaa8: 0x24450ae8  addiu       $a1, $v0, 0xAE8
    ctx->pc = 0x1ebaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x1ebaac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ebaacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ebab0: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x1ebab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1ebab4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1ebab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1ebab8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1ebab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1ebabc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ebabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ebac0: 0x8c350ae8  lw          $s5, 0xAE8($at)
    ctx->pc = 0x1ebac0u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ebac4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1ebac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ebac8: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1ebac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1ebacc: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x1ebaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1ebad0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1ebad0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ebad4: 0x8e130034  lw          $s3, 0x34($s0)
    ctx->pc = 0x1ebad4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1ebad8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ebad8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ebadc: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x1ebadcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1ebae0: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x1EBAE0u;
    SET_GPR_U32(ctx, 31, 0x1EBAE8u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x1EBAE0u, 0x1EBAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBAE8u;
label_1ebae8:
    // 0x1ebae8: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x1ebae8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ebaec: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1ebaecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1ebaf0: 0x24620ae8  addiu       $v0, $v1, 0xAE8
    ctx->pc = 0x1ebaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x1ebaf4: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x1ebaf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1ebaf8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1ebaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1ebafc: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x1ebafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x1ebb00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ebb00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ebb04: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x1ebb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1ebb08: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ebb08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1ebb0c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1ebb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1ebb10: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x1ebb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x1ebb14: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1ebb14u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ebb18: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1ebb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1ebb1c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1ebb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ebb20: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ebb20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ebb24: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ebb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ebb28: 0x8c250ae8  lw          $a1, 0xAE8($at)
    ctx->pc = 0x1ebb28u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ebb2c: 0x70a0ae28  paddub      $s5, $a1, $zero
    ctx->pc = 0x1ebb2cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ebb30: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ebb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ebb34: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x1ebb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1ebb38: 0x24850510  addiu       $a1, $a0, 0x510
    ctx->pc = 0x1ebb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1296));
    // 0x1ebb3c: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1ebb3cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ebb40: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1ebb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1ebb44: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1ebb44u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ebb48: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ebb48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ebb4c: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x1ebb4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1ebb50: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x1EBB50u;
    SET_GPR_U32(ctx, 31, 0x1EBB58u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x1EBB50u, 0x1EBB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBB58u;
label_1ebb58:
    // 0x1ebb58: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x1ebb58u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ebb5c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1ebb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1ebb60: 0x24630ae8  addiu       $v1, $v1, 0xAE8
    ctx->pc = 0x1ebb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x1ebb64: 0xac750000  sw          $s5, 0x0($v1)
    ctx->pc = 0x1ebb64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1ebb68: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x1ebb68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x1ebb6c: 0x24a40ae8  addiu       $a0, $a1, 0xAE8
    ctx->pc = 0x1ebb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2792));
    // 0x1ebb70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ebb70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ebb74: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1ebb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1ebb78: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ebb78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1ebb7c: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x1ebb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x1ebb80: 0x24b00ae8  addiu       $s0, $a1, 0xAE8
    ctx->pc = 0x1ebb80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 2792));
    // 0x1ebb84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ebb84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ebb88: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1ebb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1ebb8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ebb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ebb90: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ebb90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ebb94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ebb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ebb98: 0x8c350ae8  lw          $s5, 0xAE8($at)
    ctx->pc = 0x1ebb98u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ebb9c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ebb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ebba0: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x1ebba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1ebba4: 0x249005a0  addiu       $s0, $a0, 0x5A0
    ctx->pc = 0x1ebba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1440));
    // 0x1ebba8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1ebba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1ebbac: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1ebbacu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ebbb0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ebbb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ebbb4: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x1ebbb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1ebbb8: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x1EBBB8u;
    SET_GPR_U32(ctx, 31, 0x1EBBC0u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x1EBBB8u, 0x1EBBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBBC0u;
label_1ebbc0:
    // 0x1ebbc0: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x1ebbc0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ebbc4: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1ebbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1ebbc8: 0x24850ae8  addiu       $a1, $a0, 0xAE8
    ctx->pc = 0x1ebbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2792));
    // 0x1ebbcc: 0xacb50000  sw          $s5, 0x0($a1)
    ctx->pc = 0x1ebbccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1ebbd0: 0x32e4ffff  andi        $a0, $s7, 0xFFFF
    ctx->pc = 0x1ebbd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x1ebbd4: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x1ebbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1ebbd8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EBBD8u;
    {
        const bool branch_taken_0x1ebbd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ebbd8) {
            ctx->pc = 0x1EBBF0u;
            return;
        }
    }
    ctx->pc = 0x1EBBE0u;
    // 0x1ebbe0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1ebbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ebbe4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1ebbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ebbe8: 0xc09620c  jal         func_258830
    ctx->pc = 0x1EBBE8u;
    SET_GPR_U32(ctx, 31, 0x1EBBF0u);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x1EBBE8u, 0x1EBBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBBF0u;
}
