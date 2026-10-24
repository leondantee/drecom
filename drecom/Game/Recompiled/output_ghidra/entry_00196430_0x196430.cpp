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

// Function: entry_00196430
// Address: 0x196430 - 0x1964a0
void entry_00196430_0x196430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196430_0x196430");
#endif

    ctx->pc = 0x196430u;

    // 0x196430: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x196430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x196434: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x196434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x196438: 0x16e30019  bne         $s7, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x196438u;
    {
        const bool branch_taken_0x196438 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        if (branch_taken_0x196438) {
            ctx->pc = 0x1964A0u;
            return;
        }
    }
    ctx->pc = 0x196440u;
    // 0x196440: 0x32e5ffff  andi        $a1, $s7, 0xFFFF
    ctx->pc = 0x196440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x196444: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x196444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x196448: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x196448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x19644c: 0x27c30001  addiu       $v1, $fp, 0x1
    ctx->pc = 0x19644cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x196450: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x196450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x196454: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x196454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x196458: 0xa4650204  sh          $a1, 0x204($v1)
    ctx->pc = 0x196458u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 516), (uint16_t)GPR_U32(ctx, 5));
    // 0x19645c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x19645cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x196460: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x196460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x196464: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x196464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x196468: 0x27c30002  addiu       $v1, $fp, 0x2
    ctx->pc = 0x196468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
    // 0x19646c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x19646cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x196470: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x196470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x196474: 0xa4650204  sh          $a1, 0x204($v1)
    ctx->pc = 0x196474u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 516), (uint16_t)GPR_U32(ctx, 5));
    // 0x196478: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x196478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19647c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x19647cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x196480: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x196480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x196484: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x196484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196488: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x196488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19648c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x19648cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x196490: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x196490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196494: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x196494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x196498: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x196498u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19649c: 0x0  nop
    ctx->pc = 0x19649cu;
    // NOP
    ctx->pc = 0x1964a0u;
}
