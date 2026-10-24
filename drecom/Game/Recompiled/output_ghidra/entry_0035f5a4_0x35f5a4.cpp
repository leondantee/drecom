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

// Function: entry_0035f5a4
// Address: 0x35f5a4 - 0x35f674
void entry_0035f5a4_0x35f5a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035f5a4_0x35f5a4");
#endif

    ctx->pc = 0x35f5a4u;

    // 0x35f5a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f5a8: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x35f5a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x35f5ac: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x35f5acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x35f5b0: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x35f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35f5b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35f5b8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x35f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35f5bc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35f5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35f5c0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x35f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35f5c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35f5c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x35f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35f5cc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35f5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35f5d0: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x35f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35f5d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35f5d8: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35f5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35f5dc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35f5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35f5e0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x35f5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35f5e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35f5e8: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35f5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35f5ec: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35f5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35f5f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f5f4: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x35f5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x35f5f8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x35f5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35f5fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35f600: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35f600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35f604: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35f604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35f608: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f60c: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x35f60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x35f610: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x35f610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35f614: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35f618: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35f618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35f61c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35f61cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35f620: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x35f620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35f624: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35f628: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35f628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35f62c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35f62cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35f630: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x35f630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35f634: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35f638: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35f638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35f63c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35f63cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35f640: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f644: 0x8c6212ac  lw          $v0, 0x12AC($v1)
    ctx->pc = 0x35f644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x35f648: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35f648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35f64c: 0xac6212ac  sw          $v0, 0x12AC($v1)
    ctx->pc = 0x35f64cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4780), GPR_U32(ctx, 2));
    // 0x35f650: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f654: 0x8c4212ac  lw          $v0, 0x12AC($v0)
    ctx->pc = 0x35f654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x35f658: 0x28410051  slti        $at, $v0, 0x51
    ctx->pc = 0x35f658u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)81) ? 1 : 0);
    // 0x35f65c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x35F65Cu;
    {
        const bool branch_taken_0x35f65c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f65c) {
            ctx->pc = 0x35F674u;
            return;
        }
    }
    ctx->pc = 0x35F664u;
    // 0x35f664: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f668: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x35f668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35f66c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35f670: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x35f670u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x35f674u;
}
