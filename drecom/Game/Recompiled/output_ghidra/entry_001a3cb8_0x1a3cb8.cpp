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

// Function: entry_001a3cb8
// Address: 0x1a3cb8 - 0x1a3f88
void entry_001a3cb8_0x1a3cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3cb8_0x1a3cb8");
#endif

    ctx->pc = 0x1a3cb8u;

    // 0x1a3cb8: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x1a3cb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a3cbc: 0x1460fccd  bnez        $v1, . + 4 + (-0x333 << 2)
    ctx->pc = 0x1A3CBCu;
    {
        const bool branch_taken_0x1a3cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3cbc) {
            ctx->pc = 0x1A2FF4u;
            return;
        }
    }
    ctx->pc = 0x1A3CC4u;
    // 0x1a3cc4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a3cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a3cc8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3ccc: 0xac6405e8  sw          $a0, 0x5E8($v1)
    ctx->pc = 0x1a3cccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1512), GPR_U32(ctx, 4));
    // 0x1a3cd0: 0x3c045c00  lui         $a0, 0x5C00
    ctx->pc = 0x1a3cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23552 << 16));
    // 0x1a3cd4: 0x34851a06  ori         $a1, $a0, 0x1A06
    ctx->pc = 0x1a3cd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6662);
    // 0x1a3cd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3cdc: 0xac6505ec  sw          $a1, 0x5EC($v1)
    ctx->pc = 0x1a3cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1516), GPR_U32(ctx, 5));
    // 0x1a3ce0: 0x3c06ff60  lui         $a2, 0xFF60
    ctx->pc = 0x1a3ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65376 << 16));
    // 0x1a3ce4: 0x34c76060  ori         $a3, $a2, 0x6060
    ctx->pc = 0x1a3ce4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24672);
    // 0x1a3ce8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3cec: 0x246305f0  addiu       $v1, $v1, 0x5F0
    ctx->pc = 0x1a3cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1520));
    // 0x1a3cf0: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1a3cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1a3cf4: 0x3c037948  lui         $v1, 0x7948
    ctx->pc = 0x1a3cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31048 << 16));
    // 0x1a3cf8: 0x346471a0  ori         $a0, $v1, 0x71A0
    ctx->pc = 0x1a3cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)29088);
    // 0x1a3cfc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a3cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3d00: 0x24a305f4  addiu       $v1, $a1, 0x5F4
    ctx->pc = 0x1a3d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1524));
    // 0x1a3d04: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3d04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3d08: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x1a3d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3d0c: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1a3d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3d10: 0x24e305f8  addiu       $v1, $a3, 0x5F8
    ctx->pc = 0x1a3d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1528));
    // 0x1a3d14: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3d14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3d18: 0x3c037b38  lui         $v1, 0x7B38
    ctx->pc = 0x1a3d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31544 << 16));
    // 0x1a3d1c: 0x34648690  ori         $a0, $v1, 0x8690
    ctx->pc = 0x1a3d1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34448);
    // 0x1a3d20: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1a3d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3d24: 0x24c305fc  addiu       $v1, $a2, 0x5FC
    ctx->pc = 0x1a3d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1532));
    // 0x1a3d28: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3d2c: 0x3405fff8  ori         $a1, $zero, 0xFFF8
    ctx->pc = 0x1a3d2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3d30: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1a3d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3d34: 0x24830600  addiu       $v1, $a0, 0x600
    ctx->pc = 0x1a3d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1536));
    // 0x1a3d38: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1a3d38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1a3d3c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x1a3d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x1a3d40: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x1a3d40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3d44: 0xad070604  sw          $a3, 0x604($t0)
    ctx->pc = 0x1a3d44u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1540), GPR_U32(ctx, 7));
    // 0x1a3d48: 0x3c064800  lui         $a2, 0x4800
    ctx->pc = 0x1a3d48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18432 << 16));
    // 0x1a3d4c: 0x34c32a02  ori         $v1, $a2, 0x2A02
    ctx->pc = 0x1a3d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10754);
    // 0x1a3d50: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a3d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3d54: 0xaca30608  sw          $v1, 0x608($a1)
    ctx->pc = 0x1a3d54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1544), GPR_U32(ctx, 3));
    // 0x1a3d58: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a3d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a3d5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3d60: 0x2463060c  addiu       $v1, $v1, 0x60C
    ctx->pc = 0x1a3d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1548));
    // 0x1a3d64: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3d64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3d68: 0x3c077938  lui         $a3, 0x7938
    ctx->pc = 0x1a3d68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)31032 << 16));
    // 0x1a3d6c: 0x34e47190  ori         $a0, $a3, 0x7190
    ctx->pc = 0x1a3d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)29072);
    // 0x1a3d70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3d74: 0x24660610  addiu       $a2, $v1, 0x610
    ctx->pc = 0x1a3d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1552));
    // 0x1a3d78: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1a3d78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1a3d7c: 0x3408fff8  ori         $t0, $zero, 0xFFF8
    ctx->pc = 0x1a3d7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3d80: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a3d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3d84: 0x24a30614  addiu       $v1, $a1, 0x614
    ctx->pc = 0x1a3d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1556));
    // 0x1a3d88: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x1a3d88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x1a3d8c: 0x3c047938  lui         $a0, 0x7938
    ctx->pc = 0x1a3d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31032 << 16));
    // 0x1a3d90: 0x34848690  ori         $a0, $a0, 0x8690
    ctx->pc = 0x1a3d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34448);
    // 0x1a3d94: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1a3d94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3d98: 0x24e30618  addiu       $v1, $a3, 0x618
    ctx->pc = 0x1a3d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1560));
    // 0x1a3d9c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3da0: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x1a3da0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3da4: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1a3da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3da8: 0x24c3061c  addiu       $v1, $a2, 0x61C
    ctx->pc = 0x1a3da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1564));
    // 0x1a3dac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3db0: 0x3c037b38  lui         $v1, 0x7B38
    ctx->pc = 0x1a3db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31544 << 16));
    // 0x1a3db4: 0x34648690  ori         $a0, $v1, 0x8690
    ctx->pc = 0x1a3db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34448);
    // 0x1a3db8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a3db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3dbc: 0x24a30620  addiu       $v1, $a1, 0x620
    ctx->pc = 0x1a3dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1568));
    // 0x1a3dc0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3dc4: 0x3408fff8  ori         $t0, $zero, 0xFFF8
    ctx->pc = 0x1a3dc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3dc8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1a3dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3dcc: 0x24830624  addiu       $v1, $a0, 0x624
    ctx->pc = 0x1a3dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1572));
    // 0x1a3dd0: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x1a3dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x1a3dd4: 0x3c077b38  lui         $a3, 0x7B38
    ctx->pc = 0x1a3dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)31544 << 16));
    // 0x1a3dd8: 0x34e47190  ori         $a0, $a3, 0x7190
    ctx->pc = 0x1a3dd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)29072);
    // 0x1a3ddc: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1a3ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3de0: 0x24c30628  addiu       $v1, $a2, 0x628
    ctx->pc = 0x1a3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1576));
    // 0x1a3de4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3de4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3de8: 0x3405fff8  ori         $a1, $zero, 0xFFF8
    ctx->pc = 0x1a3de8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3dec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1a3decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3df0: 0x2483062c  addiu       $v1, $a0, 0x62C
    ctx->pc = 0x1a3df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1580));
    // 0x1a3df4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1a3df4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1a3df8: 0x3c037938  lui         $v1, 0x7938
    ctx->pc = 0x1a3df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31032 << 16));
    // 0x1a3dfc: 0x34647190  ori         $a0, $v1, 0x7190
    ctx->pc = 0x1a3dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)29072);
    // 0x1a3e00: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a3e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3e04: 0x24a60630  addiu       $a2, $a1, 0x630
    ctx->pc = 0x1a3e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1584));
    // 0x1a3e08: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1a3e08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1a3e0c: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x1a3e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3e10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3e14: 0x24630634  addiu       $v1, $v1, 0x634
    ctx->pc = 0x1a3e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1588));
    // 0x1a3e18: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3e18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3e1c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a3e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a3e20: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1a3e20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3e24: 0xace30638  sw          $v1, 0x638($a3)
    ctx->pc = 0x1a3e24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1592), GPR_U32(ctx, 3));
    // 0x1a3e28: 0x3c055c00  lui         $a1, 0x5C00
    ctx->pc = 0x1a3e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23552 << 16));
    // 0x1a3e2c: 0x34a41a06  ori         $a0, $a1, 0x1A06
    ctx->pc = 0x1a3e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6662);
    // 0x1a3e30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3e34: 0xac64063c  sw          $a0, 0x63C($v1)
    ctx->pc = 0x1a3e34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1596), GPR_U32(ctx, 4));
    // 0x1a3e38: 0x3c06ff60  lui         $a2, 0xFF60
    ctx->pc = 0x1a3e38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65376 << 16));
    // 0x1a3e3c: 0x34c46060  ori         $a0, $a2, 0x6060
    ctx->pc = 0x1a3e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24672);
    // 0x1a3e40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3e44: 0x24630640  addiu       $v1, $v1, 0x640
    ctx->pc = 0x1a3e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1600));
    // 0x1a3e48: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3e4c: 0x3c077d10  lui         $a3, 0x7D10
    ctx->pc = 0x1a3e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32016 << 16));
    // 0x1a3e50: 0x34e47b10  ori         $a0, $a3, 0x7B10
    ctx->pc = 0x1a3e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)31504);
    // 0x1a3e54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3e58: 0x24650644  addiu       $a1, $v1, 0x644
    ctx->pc = 0x1a3e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1604));
    // 0x1a3e5c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1a3e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1a3e60: 0x3404fffd  ori         $a0, $zero, 0xFFFD
    ctx->pc = 0x1a3e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x1a3e64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3e68: 0x24660648  addiu       $a2, $v1, 0x648
    ctx->pc = 0x1a3e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1608));
    // 0x1a3e6c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1a3e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1a3e70: 0x3c038400  lui         $v1, 0x8400
    ctx->pc = 0x1a3e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33792 << 16));
    // 0x1a3e74: 0x34648980  ori         $a0, $v1, 0x8980
    ctx->pc = 0x1a3e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35200);
    // 0x1a3e78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3e7c: 0x2467064c  addiu       $a3, $v1, 0x64C
    ctx->pc = 0x1a3e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1612));
    // 0x1a3e80: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1a3e80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1a3e84: 0x3404fffd  ori         $a0, $zero, 0xFFFD
    ctx->pc = 0x1a3e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x1a3e88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3e8c: 0x24650650  addiu       $a1, $v1, 0x650
    ctx->pc = 0x1a3e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1616));
    // 0x1a3e90: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1a3e90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1a3e94: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a3e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a3e98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3e9c: 0xac640654  sw          $a0, 0x654($v1)
    ctx->pc = 0x1a3e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1620), GPR_U32(ctx, 4));
    // 0x1a3ea0: 0x3c054800  lui         $a1, 0x4800
    ctx->pc = 0x1a3ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18432 << 16));
    // 0x1a3ea4: 0x34a62a02  ori         $a2, $a1, 0x2A02
    ctx->pc = 0x1a3ea4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10754);
    // 0x1a3ea8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3eac: 0xac660658  sw          $a2, 0x658($v1)
    ctx->pc = 0x1a3eacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1624), GPR_U32(ctx, 6));
    // 0x1a3eb0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a3eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a3eb4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3eb8: 0x2465065c  addiu       $a1, $v1, 0x65C
    ctx->pc = 0x1a3eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1628));
    // 0x1a3ebc: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1a3ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1a3ec0: 0x3c037d00  lui         $v1, 0x7D00
    ctx->pc = 0x1a3ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32000 << 16));
    // 0x1a3ec4: 0x34647b00  ori         $a0, $v1, 0x7B00
    ctx->pc = 0x1a3ec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31488);
    // 0x1a3ec8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3ecc: 0x24680660  addiu       $t0, $v1, 0x660
    ctx->pc = 0x1a3eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1632));
    // 0x1a3ed0: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x1a3ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x1a3ed4: 0x3404fffd  ori         $a0, $zero, 0xFFFD
    ctx->pc = 0x1a3ed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x1a3ed8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3edc: 0x24630664  addiu       $v1, $v1, 0x664
    ctx->pc = 0x1a3edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1636));
    // 0x1a3ee0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3ee4: 0x3c067d00  lui         $a2, 0x7D00
    ctx->pc = 0x1a3ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32000 << 16));
    // 0x1a3ee8: 0x34c78980  ori         $a3, $a2, 0x8980
    ctx->pc = 0x1a3ee8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)35200);
    // 0x1a3eec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1a3eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3ef0: 0x24830668  addiu       $v1, $a0, 0x668
    ctx->pc = 0x1a3ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1640));
    // 0x1a3ef4: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1a3ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1a3ef8: 0x3405fffd  ori         $a1, $zero, 0xFFFD
    ctx->pc = 0x1a3ef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x1a3efc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3f00: 0x2464066c  addiu       $a0, $v1, 0x66C
    ctx->pc = 0x1a3f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1644));
    // 0x1a3f04: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1a3f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1a3f08: 0x3c088400  lui         $t0, 0x8400
    ctx->pc = 0x1a3f08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33792 << 16));
    // 0x1a3f0c: 0x35038980  ori         $v1, $t0, 0x8980
    ctx->pc = 0x1a3f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)35200);
    // 0x1a3f10: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1a3f10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3f14: 0x24e60670  addiu       $a2, $a3, 0x670
    ctx->pc = 0x1a3f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1648));
    // 0x1a3f18: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1a3f18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1a3f1c: 0x3404fffd  ori         $a0, $zero, 0xFFFD
    ctx->pc = 0x1a3f1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x1a3f20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3f24: 0x24630674  addiu       $v1, $v1, 0x674
    ctx->pc = 0x1a3f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1652));
    // 0x1a3f28: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3f28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3f2c: 0x3c048400  lui         $a0, 0x8400
    ctx->pc = 0x1a3f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33792 << 16));
    // 0x1a3f30: 0x34857b00  ori         $a1, $a0, 0x7B00
    ctx->pc = 0x1a3f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31488);
    // 0x1a3f34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3f38: 0x24680678  addiu       $t0, $v1, 0x678
    ctx->pc = 0x1a3f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1656));
    // 0x1a3f3c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x1a3f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x1a3f40: 0x3407fffd  ori         $a3, $zero, 0xFFFD
    ctx->pc = 0x1a3f40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x1a3f44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3f48: 0x2466067c  addiu       $a2, $v1, 0x67C
    ctx->pc = 0x1a3f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1660));
    // 0x1a3f4c: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1a3f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x1a3f50: 0x3c037d00  lui         $v1, 0x7D00
    ctx->pc = 0x1a3f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32000 << 16));
    // 0x1a3f54: 0x34657b00  ori         $a1, $v1, 0x7B00
    ctx->pc = 0x1a3f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31488);
    // 0x1a3f58: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1a3f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3f5c: 0x24830680  addiu       $v1, $a0, 0x680
    ctx->pc = 0x1a3f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1664));
    // 0x1a3f60: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1a3f60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1a3f64: 0x3403fffd  ori         $v1, $zero, 0xFFFD
    ctx->pc = 0x1a3f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x1a3f68: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a3f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3f6c: 0x24a40684  addiu       $a0, $a1, 0x684
    ctx->pc = 0x1a3f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1668));
    // 0x1a3f70: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a3f70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a3f74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a3f74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3f78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3f7c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a3f7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a3f80: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3F88u;
}
