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

// Function: entry_00223188
// Address: 0x223188 - 0x2231ac
void entry_00223188_0x223188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00223188_0x223188");
#endif

    ctx->pc = 0x223188u;

    // 0x223188: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x223188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x22318c: 0x8c24af60  lw          $a0, -0x50A0($at)
    ctx->pc = 0x22318cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x85AF60u));
    // 0x223190: 0x2c8201f4  sltiu       $v0, $a0, 0x1F4
    ctx->pc = 0x223190u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)500) ? 1 : 0);
    // 0x223194: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223194u;
    {
        const bool branch_taken_0x223194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x223194) {
            ctx->pc = 0x2231ACu;
            return;
        }
    }
    ctx->pc = 0x22319Cu;
    // 0x22319c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22319cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2231a0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2231a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2231a4: 0x24461330  addiu       $a2, $v0, 0x1330
    ctx->pc = 0x2231a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2231a8: 0xa4c300aa  sh          $v1, 0xAA($a2)
    ctx->pc = 0x2231a8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 170), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2231acu;
}
