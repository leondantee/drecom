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

// Function: entry_002d15dc
// Address: 0x2d15dc - 0x2d1648
void entry_002d15dc_0x2d15dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d15dc_0x2d15dc");
#endif

    ctx->pc = 0x2d15dcu;

    // 0x2d15dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d15dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d15e0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2d15e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d15e4: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x2d15e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x2d15e8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2d15e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2d15ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d15ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d15f0: 0x0  nop
    ctx->pc = 0x2d15f0u;
    // NOP
    // 0x2d15f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d15f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d15f8: 0x0  nop
    ctx->pc = 0x2d15f8u;
    // NOP
    // 0x2d15fc: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x2D15FCu;
    {
        const bool branch_taken_0x2d15fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d15fc) {
            ctx->pc = 0x2D1648u;
            return;
        }
    }
    ctx->pc = 0x2D1604u;
    // 0x2d1604: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2d1604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1608: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d1608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d160c: 0x2403ff85  addiu       $v1, $zero, -0x7B
    ctx->pc = 0x2d160cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d1610: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d1610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d1614: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d1614u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d1618: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d161c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d161cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1620: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d1620u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1624: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1628: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d162c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d162cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1630: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1634: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d1634u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1638: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d163c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d163cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1640: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1644: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d1644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d1648u;
}
