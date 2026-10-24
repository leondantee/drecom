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

// Function: entry_00342268
// Address: 0x342268 - 0x3422f0
void entry_00342268_0x342268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00342268_0x342268");
#endif

    ctx->pc = 0x342268u;

    // 0x342268: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x342268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x34226c: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x34226cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x342270: 0x84c70036  lh          $a3, 0x36($a2)
    ctx->pc = 0x342270u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 54)));
    // 0x342274: 0x7443c  dsll32      $t0, $a3, 16
    ctx->pc = 0x342274u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 16));
    // 0x342278: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x342278u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x34227c: 0x26290060  addiu       $t1, $s1, 0x60
    ctx->pc = 0x34227cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x342280: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x342280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x342284: 0x102082a  slt         $at, $t0, $v0
    ctx->pc = 0x342284u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x342288: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x342288u;
    {
        const bool branch_taken_0x342288 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342288) {
            ctx->pc = 0x3422F0u;
            return;
        }
    }
    ctx->pc = 0x342290u;
    // 0x342290: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342294: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x342294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x342298: 0x8462003c  lh          $v0, 0x3C($v1)
    ctx->pc = 0x342298u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x34229c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x34229cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3422a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3422a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3422a4: 0x8e340060  lw          $s4, 0x60($s1)
    ctx->pc = 0x3422a4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x3422a8: 0x2821823  subu        $v1, $s4, $v0
    ctx->pc = 0x3422a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3422ac: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x3422acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x3422b0: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3422b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3422b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3422b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3422b8: 0x84420036  lh          $v0, 0x36($v0)
    ctx->pc = 0x3422b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x3422bc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3422bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3422c0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3422c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3422c4: 0x26220060  addiu       $v0, $s1, 0x60
    ctx->pc = 0x3422c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x3422c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3422c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3422cc: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x3422ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3422d0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x3422D0u;
    {
        const bool branch_taken_0x3422d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3422d0) {
            ctx->pc = 0x3422F0u;
            return;
        }
    }
    ctx->pc = 0x3422D8u;
    // 0x3422d8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3422d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3422dc: 0x24861330  addiu       $a2, $a0, 0x1330
    ctx->pc = 0x3422dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x3422e0: 0x84c20036  lh          $v0, 0x36($a2)
    ctx->pc = 0x3422e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 54)));
    // 0x3422e4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3422e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3422e8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3422e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3422ec: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x3422ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    ctx->pc = 0x3422f0u;
}
