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

// Function: entry_0030db24
// Address: 0x30db24 - 0x30dbec
void entry_0030db24_0x30db24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030db24_0x30db24");
#endif

    switch (ctx->pc) {
        case 0x30db5cu: goto label_30db5c;
        case 0x30db6cu: goto label_30db6c;
        case 0x30db78u: goto label_30db78;
        case 0x30db88u: goto label_30db88;
        case 0x30db94u: goto label_30db94;
        default: break;
    }

    ctx->pc = 0x30db24u;

    // 0x30db24: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x30db24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x30db28: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x30db28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30db2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30db30: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x30db30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30db34: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x30db34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x30db38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30db38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30db3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30db40: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30db40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30db44: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x30db44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30db48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30db48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30db4c: 0x24660330  addiu       $a2, $v1, 0x330
    ctx->pc = 0x30db4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 816));
    // 0x30db50: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x30db50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30db54: 0xc086488  jal         func_219220
    ctx->pc = 0x30DB54u;
    SET_GPR_U32(ctx, 31, 0x30DB5Cu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x30DB54u, 0x30DB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DB5Cu;
label_30db5c:
    // 0x30db5c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30db5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30db60: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30db60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30db64: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30DB64u;
    SET_GPR_U32(ctx, 31, 0x30DB6Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30DB64u, 0x30DB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DB6Cu;
label_30db6c:
    // 0x30db6c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30db6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30db70: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30DB70u;
    SET_GPR_U32(ctx, 31, 0x30DB78u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30DB70u, 0x30DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DB78u;
label_30db78:
    // 0x30db78: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30db78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30db7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30db7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30db80: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30DB80u;
    SET_GPR_U32(ctx, 31, 0x30DB88u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30DB80u, 0x30DB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DB88u;
label_30db88:
    // 0x30db88: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30db88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30db8c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30DB8Cu;
    SET_GPR_U32(ctx, 31, 0x30DB94u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30DB8Cu, 0x30DB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DB94u;
label_30db94:
    // 0x30db94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30db94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30db98: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30db98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30db9c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30DB9Cu;
    {
        const bool branch_taken_0x30db9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30db9c) {
            ctx->pc = 0x30DBECu;
            return;
        }
    }
    ctx->pc = 0x30DBA4u;
    // 0x30dba4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dba8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dbac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30dbacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30dbb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30dbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dbb4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dbb8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30dbb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30dbbc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dbc0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30dbc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30dbc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dbc8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30dbc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30dbcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dbd0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30dbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30dbd4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x30dbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dbd8: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30dbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30dbdc: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x30dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x30dbe0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30dbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30dbe4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30dbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30dbe8: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30dbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    ctx->pc = 0x30dbecu;
}
