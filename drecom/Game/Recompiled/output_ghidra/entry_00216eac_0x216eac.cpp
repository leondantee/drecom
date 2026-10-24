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

// Function: entry_00216eac
// Address: 0x216eac - 0x216ee4
void entry_00216eac_0x216eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216eac_0x216eac");
#endif

    ctx->pc = 0x216eacu;

label_216eac:
    // 0x216eac: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x216eacu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x216eb0: 0xdcc70008  ld          $a3, 0x8($a2)
    ctx->pc = 0x216eb0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x216eb4: 0xdcc80010  ld          $t0, 0x10($a2)
    ctx->pc = 0x216eb4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x216eb8: 0xdcca0018  ld          $t2, 0x18($a2)
    ctx->pc = 0x216eb8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x216ebc: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x216ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x216ec0: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x216ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x216ec4: 0xfca80010  sd          $t0, 0x10($a1)
    ctx->pc = 0x216ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 8));
    // 0x216ec8: 0xfcaa0018  sd          $t2, 0x18($a1)
    ctx->pc = 0x216ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 10));
    // 0x216ecc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x216eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x216ed0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x216ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x216ed4: 0x0  nop
    ctx->pc = 0x216ed4u;
    // NOP
    // 0x216ed8: 0x14c2fff4  bne         $a2, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x216ED8u;
    {
        const bool branch_taken_0x216ed8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x216ed8) {
            ctx->pc = 0x216EACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216eac;
        }
    }
    ctx->pc = 0x216EE0u;
    // 0x216ee0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x216ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x216ee4u;
}
