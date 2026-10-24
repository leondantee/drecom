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

// Function: entry_003612a4
// Address: 0x3612a4 - 0x361318
void entry_003612a4_0x3612a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003612a4_0x3612a4");
#endif

    ctx->pc = 0x3612a4u;

    // 0x3612a4: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x3612a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3612a8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3612a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3612ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3612acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3612b0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3612b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x3612b4: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x3612b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3612b8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3612b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3612bc: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x3612bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x3612c0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3612c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x3612c4: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x3612c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3612c8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3612c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3612cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3612ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3612d0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3612d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x3612d4: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x3612d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3612d8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3612d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3612dc: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x3612dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x3612e0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3612e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x3612e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3612e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3612e8: 0x8c83128c  lw          $v1, 0x128C($a0)
    ctx->pc = 0x3612e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x3612ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3612ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3612f0: 0xac83128c  sw          $v1, 0x128C($a0)
    ctx->pc = 0x3612f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4748), GPR_U32(ctx, 3));
    // 0x3612f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3612f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3612f8: 0x8c63128c  lw          $v1, 0x128C($v1)
    ctx->pc = 0x3612f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x3612fc: 0x2c610020  sltiu       $at, $v1, 0x20
    ctx->pc = 0x3612fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x361300: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x361300u;
    {
        const bool branch_taken_0x361300 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361300) {
            ctx->pc = 0x361318u;
            return;
        }
    }
    ctx->pc = 0x361308u;
    // 0x361308: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x361308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36130c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x36130cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x361310: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x361310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x361314: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x361314u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x361318u;
}
