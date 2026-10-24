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

// Function: entry_0020aab8
// Address: 0x20aab8 - 0x20abcc
void entry_0020aab8_0x20aab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020aab8_0x20aab8");
#endif

    switch (ctx->pc) {
        case 0x20aac8u: goto label_20aac8;
        case 0x20aad4u: goto label_20aad4;
        case 0x20aae4u: goto label_20aae4;
        case 0x20aaf0u: goto label_20aaf0;
        case 0x20ab54u: goto label_20ab54;
        default: break;
    }

    ctx->pc = 0x20aab8u;

    // 0x20aab8: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20aabc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20aabcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20aac0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20AAC0u;
    SET_GPR_U32(ctx, 31, 0x20AAC8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20AAC0u, 0x20AAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AAC8u;
label_20aac8:
    // 0x20aac8: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20aac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20aacc: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x20AACCu;
    SET_GPR_U32(ctx, 31, 0x20AAD4u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x20AACCu, 0x20AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AAD4u;
label_20aad4:
    // 0x20aad4: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20aad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20aad8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20aad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20aadc: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20AADCu;
    SET_GPR_U32(ctx, 31, 0x20AAE4u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20AADCu, 0x20AAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AAE4u;
label_20aae4:
    // 0x20aae4: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20aae8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20AAE8u;
    SET_GPR_U32(ctx, 31, 0x20AAF0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20AAE8u, 0x20AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AAF0u;
label_20aaf0:
    // 0x20aaf0: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20aaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20aaf4: 0x84821278  lh          $v0, 0x1278($a0)
    ctx->pc = 0x20aaf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x20aaf8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x20aaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20aafc: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x20aafcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x20ab00: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20ab04: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x20ab04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x20ab08: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x20AB08u;
    {
        const bool branch_taken_0x20ab08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ab08) {
            ctx->pc = 0x20ABFCu;
            return;
        }
    }
    ctx->pc = 0x20AB10u;
    // 0x20ab10: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x20ab10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20ab14: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20ab18: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x20ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20ab1c: 0xac4400f0  sw          $a0, 0xF0($v0)
    ctx->pc = 0x20ab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 4));
    // 0x20ab20: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x20ab20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20ab24: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20ab24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20ab28: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x20ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20ab2c: 0xac4400f4  sw          $a0, 0xF4($v0)
    ctx->pc = 0x20ab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 4));
    // 0x20ab30: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x20ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20ab34: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20ab38: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20ab3c: 0xac4300f8  sw          $v1, 0xF8($v0)
    ctx->pc = 0x20ab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 3));
    // 0x20ab40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20ab40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20ab44: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ab44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ab48: 0x8c249380  lw          $a0, -0x6C80($at)
    ctx->pc = 0x20ab48u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x619380u));
    // 0x20ab4c: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x20AB4Cu;
    SET_GPR_U32(ctx, 31, 0x20AB54u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x20AB4Cu, 0x20AB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB54u;
label_20ab54:
    // 0x20ab54: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ab54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ab58: 0x8c249310  lw          $a0, -0x6CF0($at)
    ctx->pc = 0x20ab58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x619310u));
    // 0x20ab5c: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x20ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x20ab60: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x20ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x20ab64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20ab64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20ab68: 0xac82020c  sw          $v0, 0x20C($a0)
    ctx->pc = 0x20ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 2));
    // 0x20ab6c: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20ab70: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x20ab70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ab74: 0x3c054662  lui         $a1, 0x4662
    ctx->pc = 0x20ab74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18018 << 16));
    // 0x20ab78: 0x34ab9000  ori         $t3, $a1, 0x9000
    ctx->pc = 0x20ab78u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36864);
    // 0x20ab7c: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x20ab7cu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ab80: 0x0  nop
    ctx->pc = 0x20ab80u;
    // NOP
    // 0x20ab84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20ab84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ab88: 0x0  nop
    ctx->pc = 0x20ab88u;
    // NOP
    // 0x20ab8c: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x20AB8Cu;
    {
        const bool branch_taken_0x20ab8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ab8c) {
            ctx->pc = 0x20ABCCu;
            return;
        }
    }
    ctx->pc = 0x20AB94u;
    // 0x20ab94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20ab94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ab98: 0x8fa70218  lw          $a3, 0x218($sp)
    ctx->pc = 0x20ab98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20ab9c: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x20ab9cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x20aba0: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x20aba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20aba4: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20aba8: 0xa0480001  sb          $t0, 0x1($v0)
    ctx->pc = 0x20aba8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x20abac: 0x8fa90218  lw          $t1, 0x218($sp)
    ctx->pc = 0x20abacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20abb0: 0xa1200002  sb          $zero, 0x2($t1)
    ctx->pc = 0x20abb0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20abb4: 0x8faa0218  lw          $t2, 0x218($sp)
    ctx->pc = 0x20abb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20abb8: 0xa1400003  sb          $zero, 0x3($t2)
    ctx->pc = 0x20abb8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20abbc: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20abc0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x20abc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x20abc4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20ABC4u;
    {
        const bool branch_taken_0x20abc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20abc4) {
            ctx->pc = 0x20ABFCu;
            return;
        }
    }
    ctx->pc = 0x20ABCCu;
}
