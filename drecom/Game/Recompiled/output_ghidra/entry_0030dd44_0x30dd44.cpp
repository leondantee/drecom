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

// Function: entry_0030dd44
// Address: 0x30dd44 - 0x30de0c
void entry_0030dd44_0x30dd44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030dd44_0x30dd44");
#endif

    switch (ctx->pc) {
        case 0x30dd7cu: goto label_30dd7c;
        case 0x30dd8cu: goto label_30dd8c;
        case 0x30dd98u: goto label_30dd98;
        case 0x30dda8u: goto label_30dda8;
        case 0x30ddb4u: goto label_30ddb4;
        default: break;
    }

    ctx->pc = 0x30dd44u;

    // 0x30dd44: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x30dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x30dd48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30dd48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30dd4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30dd50: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30dd50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30dd54: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x30dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x30dd58: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x30dd58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30dd5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dd60: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30dd64: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x30dd64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30dd68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30dd68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30dd6c: 0x24460330  addiu       $a2, $v0, 0x330
    ctx->pc = 0x30dd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
    // 0x30dd70: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x30dd70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30dd74: 0xc086488  jal         func_219220
    ctx->pc = 0x30DD74u;
    SET_GPR_U32(ctx, 31, 0x30DD7Cu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x30DD74u, 0x30DD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DD7Cu;
label_30dd7c:
    // 0x30dd7c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dd80: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30dd80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30dd84: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30DD84u;
    SET_GPR_U32(ctx, 31, 0x30DD8Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30DD84u, 0x30DD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DD8Cu;
label_30dd8c:
    // 0x30dd8c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dd90: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30DD90u;
    SET_GPR_U32(ctx, 31, 0x30DD98u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30DD90u, 0x30DD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DD98u;
label_30dd98:
    // 0x30dd98: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dd9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30dd9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30dda0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30DDA0u;
    SET_GPR_U32(ctx, 31, 0x30DDA8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30DDA0u, 0x30DDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DDA8u;
label_30dda8:
    // 0x30dda8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ddac: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30DDACu;
    SET_GPR_U32(ctx, 31, 0x30DDB4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30DDACu, 0x30DDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DDB4u;
label_30ddb4:
    // 0x30ddb4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ddb8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30ddb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30ddbc: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30DDBCu;
    {
        const bool branch_taken_0x30ddbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ddbc) {
            ctx->pc = 0x30DE0Cu;
            return;
        }
    }
    ctx->pc = 0x30DDC4u;
    // 0x30ddc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30ddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ddc8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ddcc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30ddccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30ddd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30ddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ddd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ddd8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30ddd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30dddc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dde0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30dde0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30dde4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dde8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30dde8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ddec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ddf0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30ddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30ddf4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x30ddf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ddf8: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30ddf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30ddfc: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x30ddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x30de00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30de00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30de04: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30de04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30de08: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30de08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    ctx->pc = 0x30de0cu;
}
