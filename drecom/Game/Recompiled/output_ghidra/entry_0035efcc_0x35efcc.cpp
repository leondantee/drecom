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

// Function: entry_0035efcc
// Address: 0x35efcc - 0x35f01c
void entry_0035efcc_0x35efcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035efcc_0x35efcc");
#endif

    ctx->pc = 0x35efccu;

    // 0x35efcc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35efccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35efd0: 0x8c631330  lw          $v1, 0x1330($v1)
    ctx->pc = 0x35efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
    // 0x35efd4: 0x28610097  slti        $at, $v1, 0x97
    ctx->pc = 0x35efd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)151) ? 1 : 0);
    // 0x35efd8: 0x14200053  bnez        $at, . + 4 + (0x53 << 2)
    ctx->pc = 0x35EFD8u;
    {
        const bool branch_taken_0x35efd8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35efd8) {
            ctx->pc = 0x35F128u;
            return;
        }
    }
    ctx->pc = 0x35EFE0u;
    // 0x35efe0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35efe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35efe4: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x35efe4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x35efe8: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x35efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x35efec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x35efecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x35eff0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35eff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35eff4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35eff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35eff8: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x35eff8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x35effc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35effcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f000: 0xac601330  sw          $zero, 0x1330($v1)
    ctx->pc = 0x35f000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 0));
    // 0x35f004: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35f004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f008: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x35f008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x35f00c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35f00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35f010: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x35f010u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x35f014: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x35F014u;
    {
        const bool branch_taken_0x35f014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f014) {
            ctx->pc = 0x35F128u;
            return;
        }
    }
    ctx->pc = 0x35F01Cu;
}
