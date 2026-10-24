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

// Function: entry_003758a4
// Address: 0x3758a4 - 0x3758f8
void entry_003758a4_0x3758a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003758a4_0x3758a4");
#endif

    ctx->pc = 0x3758a4u;

    // 0x3758a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3758a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3758a8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3758a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3758ac: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3758ACu;
    {
        const bool branch_taken_0x3758ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3758ac) {
            ctx->pc = 0x3758F8u;
            return;
        }
    }
    ctx->pc = 0x3758B4u;
    // 0x3758b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3758b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3758b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3758b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3758bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3758bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3758c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3758c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3758c4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3758c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3758c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3758c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3758cc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3758ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3758d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3758d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3758d4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3758d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3758d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3758d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3758dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3758dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3758e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3758e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3758e4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x3758e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3758e8: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x3758e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x3758ec: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3758ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3758f0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3758f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3758f4: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x3758f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
    ctx->pc = 0x3758f8u;
}
