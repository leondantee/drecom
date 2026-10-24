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

// Function: entry_00122524
// Address: 0x122524 - 0x1225c8
void entry_00122524_0x122524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122524_0x122524");
#endif

    ctx->pc = 0x122524u;

    // 0x122524: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122528: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x122528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12252c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x12252cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x122530: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x122530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x122534: 0x108000a5  beqz        $a0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x122534u;
    {
        const bool branch_taken_0x122534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x122534) {
            ctx->pc = 0x1227CCu;
            return;
        }
    }
    ctx->pc = 0x12253Cu;
    // 0x12253c: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x12253cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122540: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x122540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x122544: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x122544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x122548: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x122548u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12254c: 0x0  nop
    ctx->pc = 0x12254cu;
    // NOP
    // 0x122550: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x122550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x122554: 0x0  nop
    ctx->pc = 0x122554u;
    // NOP
    // 0x122558: 0x45000050  bc1f        . + 4 + (0x50 << 2)
    ctx->pc = 0x122558u;
    {
        const bool branch_taken_0x122558 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x122558) {
            ctx->pc = 0x12269Cu;
            return;
        }
    }
    ctx->pc = 0x122560u;
    // 0x122560: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122564: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x122564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x122568: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x122568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x12256c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x12256cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x122570: 0x1480003c  bnez        $a0, . + 4 + (0x3C << 2)
    ctx->pc = 0x122570u;
    {
        const bool branch_taken_0x122570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x122570) {
            ctx->pc = 0x122664u;
            return;
        }
    }
    ctx->pc = 0x122578u;
    // 0x122578: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12257c: 0x94a311f6  lhu         $v1, 0x11F6($a1)
    ctx->pc = 0x12257cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4598)));
    // 0x122580: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x122580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x122584: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x122584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x122588: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x122588u;
    {
        const bool branch_taken_0x122588 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x122588) {
            ctx->pc = 0x1225C8u;
            return;
        }
    }
    ctx->pc = 0x122590u;
    // 0x122590: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122594: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122598: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x122598u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12259c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12259cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1225a0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1225a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1225a4: 0xa0660001  sb          $a2, 0x1($v1)
    ctx->pc = 0x1225a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x1225a8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1225a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1225ac: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1225acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1225b0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1225b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1225b4: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1225b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1225b8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1225b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1225bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1225bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1225c0: 0x100001db  b           . + 4 + (0x1DB << 2)
    ctx->pc = 0x1225C0u;
    {
        const bool branch_taken_0x1225c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1225c0) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x1225C8u;
}
