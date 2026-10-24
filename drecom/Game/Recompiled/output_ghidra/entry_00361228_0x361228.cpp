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

// Function: entry_00361228
// Address: 0x361228 - 0x3612a4
void entry_00361228_0x361228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00361228_0x361228");
#endif

    ctx->pc = 0x361228u;

    // 0x361228: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x361228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x36122c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x36122cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x361230: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x361230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x361234: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x361234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x361238: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x361238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x36123c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x36123cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x361240: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x361240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x361244: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x361244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x361248: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x361248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x36124c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x36124cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x361250: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x361250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x361254: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x361254u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x361258: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x361258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x36125c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x36125cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x361260: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x361260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x361264: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x361264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x361268: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x361268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36126c: 0x8c83128c  lw          $v1, 0x128C($a0)
    ctx->pc = 0x36126cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x361270: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x361270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x361274: 0xac83128c  sw          $v1, 0x128C($a0)
    ctx->pc = 0x361274u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4748), GPR_U32(ctx, 3));
    // 0x361278: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x361278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36127c: 0x8c63128c  lw          $v1, 0x128C($v1)
    ctx->pc = 0x36127cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x361280: 0x2c610061  sltiu       $at, $v1, 0x61
    ctx->pc = 0x361280u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)97) ? 1 : 0);
    // 0x361284: 0x14200024  bnez        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x361284u;
    {
        const bool branch_taken_0x361284 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x361284) {
            ctx->pc = 0x361318u;
            return;
        }
    }
    ctx->pc = 0x36128Cu;
    // 0x36128c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36128cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x361290: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x361290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x361294: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x361294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x361298: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x361298u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x36129c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x36129Cu;
    {
        const bool branch_taken_0x36129c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36129c) {
            ctx->pc = 0x361318u;
            return;
        }
    }
    ctx->pc = 0x3612A4u;
}
