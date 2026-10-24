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

// Function: entry_0035f4c0
// Address: 0x35f4c0 - 0x35f5a4
void entry_0035f4c0_0x35f4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035f4c0_0x35f4c0");
#endif

    ctx->pc = 0x35f4c0u;

    // 0x35f4c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f4c4: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x35f4c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x35f4c8: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x35f4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x35f4cc: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x35f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35f4d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35f4d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x35f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35f4d8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35f4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35f4dc: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x35f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35f4e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35f4e4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x35f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35f4e8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35f4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35f4ec: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x35f4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35f4f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35f4f4: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35f4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35f4f8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35f4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35f4fc: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x35f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35f500: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35f500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35f504: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35f504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35f508: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35f508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35f50c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f510: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x35f510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x35f514: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x35f514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35f518: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35f51c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35f520: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35f520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35f524: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f528: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x35f528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x35f52c: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x35f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35f530: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35f534: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35f534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35f538: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35f538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35f53c: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x35f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35f540: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35f544: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35f544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35f548: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35f548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35f54c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x35f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35f550: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35f554: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35f554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35f558: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35f558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35f55c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f560: 0x8c6212ac  lw          $v0, 0x12AC($v1)
    ctx->pc = 0x35f560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x35f564: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35f564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35f568: 0xac6212ac  sw          $v0, 0x12AC($v1)
    ctx->pc = 0x35f568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4780), GPR_U32(ctx, 2));
    // 0x35f56c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f570: 0x8c4212ac  lw          $v0, 0x12AC($v0)
    ctx->pc = 0x35f570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x35f574: 0x2841ffb0  slti        $at, $v0, -0x50
    ctx->pc = 0x35f574u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967216) ? 1 : 0);
    // 0x35f578: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x35F578u;
    {
        const bool branch_taken_0x35f578 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f578) {
            ctx->pc = 0x35F674u;
            return;
        }
    }
    ctx->pc = 0x35F580u;
    // 0x35f580: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f584: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x35f584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35f588: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35f588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35f58c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x35f58cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x35f590: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35f590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35f594: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f598: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x35f598u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x35f59c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x35F59Cu;
    {
        const bool branch_taken_0x35f59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f59c) {
            ctx->pc = 0x35F674u;
            return;
        }
    }
    ctx->pc = 0x35F5A4u;
}
