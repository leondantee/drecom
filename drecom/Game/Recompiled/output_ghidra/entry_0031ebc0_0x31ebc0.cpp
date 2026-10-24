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

// Function: entry_0031ebc0
// Address: 0x31ebc0 - 0x31ec10
void entry_0031ebc0_0x31ebc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031ebc0_0x31ebc0");
#endif

    ctx->pc = 0x31ebc0u;

label_31ebc0:
    // 0x31ebc0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31ebc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31ebc4: 0x8c22af6c  lw          $v0, -0x5094($at)
    ctx->pc = 0x31ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AF6Cu));
    // 0x31ebc8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x31ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x31ebcc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31ebd0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x31ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x31ebd4: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x31ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x31ebd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31ebdc: 0x8c421390  lw          $v0, 0x1390($v0)
    ctx->pc = 0x31ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x31ebe0: 0x8c431298  lw          $v1, 0x1298($v0)
    ctx->pc = 0x31ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x31ebe4: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x31ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x31ebe8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31ebe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31ebec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31EBECu;
    {
        const bool branch_taken_0x31ebec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ebec) {
            ctx->pc = 0x31EC10u;
            return;
        }
    }
    ctx->pc = 0x31EBF4u;
    // 0x31ebf4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31ebf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31ebf8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31ebf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31ebfc: 0x9422af66  lhu         $v0, -0x509A($at)
    ctx->pc = 0x31ebfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x85AF66u));
    // 0x31ec00: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x31ec00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31ec04: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x31ec04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31ec08: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x31EC08u;
    {
        const bool branch_taken_0x31ec08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ec08) {
            ctx->pc = 0x31EBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ebc0;
        }
    }
    ctx->pc = 0x31EC10u;
}
