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

// Function: entry_0031ccd4
// Address: 0x31ccd4 - 0x31cd48
void entry_0031ccd4_0x31ccd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031ccd4_0x31ccd4");
#endif

    ctx->pc = 0x31ccd4u;

    // 0x31ccd4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31ccd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31ccd8: 0x8c311a48  lw          $s1, 0x1A48($at)
    ctx->pc = 0x31ccd8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31ccdc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31ccdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x31cce0: 0x2232024  and         $a0, $s1, $v1
    ctx->pc = 0x31cce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x31cce4: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x31CCE4u;
    {
        const bool branch_taken_0x31cce4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cce4) {
            ctx->pc = 0x31CD48u;
            return;
        }
    }
    ctx->pc = 0x31CCECu;
    // 0x31ccec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31ccecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31ccf0: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x31ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31ccf4: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x31ccf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x31ccf8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x31CCF8u;
    {
        const bool branch_taken_0x31ccf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ccf8) {
            ctx->pc = 0x31CD48u;
            return;
        }
    }
    ctx->pc = 0x31CD00u;
    // 0x31cd00: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31cd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cd04: 0x8c831330  lw          $v1, 0x1330($a0)
    ctx->pc = 0x31cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
    // 0x31cd08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31cd0c: 0xac831330  sw          $v1, 0x1330($a0)
    ctx->pc = 0x31cd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4912), GPR_U32(ctx, 3));
    // 0x31cd10: 0x1c60000d  bgtz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x31CD10u;
    {
        const bool branch_taken_0x31cd10 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x31cd10) {
            ctx->pc = 0x31CD48u;
            return;
        }
    }
    ctx->pc = 0x31CD18u;
    // 0x31cd18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31cd1c: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x31cd1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cd20: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x31cd20u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x31cd24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31cd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31cd28: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x31cd28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cd2c: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x31cd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x31cd30: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31cd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cd34: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x31cd34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31cd38: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x31cd38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cd3c: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x31cd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31cd40: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cd44: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x31cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x31cd48u;
}
