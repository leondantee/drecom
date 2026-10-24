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

// Function: entry_001ac924
// Address: 0x1ac924 - 0x1ac980
void entry_001ac924_0x1ac924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac924_0x1ac924");
#endif

    ctx->pc = 0x1ac924u;

    // 0x1ac924: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x1ac924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ac928: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ac928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ac92c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ac92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ac930: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AC930u;
    {
        const bool branch_taken_0x1ac930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac930) {
            ctx->pc = 0x1AC980u;
            return;
        }
    }
    ctx->pc = 0x1AC938u;
    // 0x1ac938: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1ac938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ac93c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1ac93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1ac940: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1ac940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac944: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1ac944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac948: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x1ac948u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ac94c: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ac94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ac950: 0xc421eff4  lwc1        $f1, -0x100C($at)
    ctx->pc = 0x1ac950u;
    { uint32_t bits = FAST_READ32(0x5EEFF4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac954: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x1ac954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x1ac958: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1ac958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1ac95c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ac95cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac960: 0x0  nop
    ctx->pc = 0x1ac960u;
    // NOP
    // 0x1ac964: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ac964u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ac968: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1ac968u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ac96c: 0x0  nop
    ctx->pc = 0x1ac96cu;
    // NOP
    // 0x1ac970: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC970u;
    {
        const bool branch_taken_0x1ac970 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ac970) {
            ctx->pc = 0x1AC980u;
            return;
        }
    }
    ctx->pc = 0x1AC978u;
    // 0x1ac978: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x1ac978u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ac97c: 0x0  nop
    ctx->pc = 0x1ac97cu;
    // NOP
    ctx->pc = 0x1ac980u;
}
