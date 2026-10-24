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

// Function: entry_00227558
// Address: 0x227558 - 0x2275d0
void entry_00227558_0x227558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227558_0x227558");
#endif

    ctx->pc = 0x227558u;

    // 0x227558: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22755c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22755cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x227560: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x227560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x227564: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x227564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x227568: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22756c: 0x0  nop
    ctx->pc = 0x22756cu;
    // NOP
    // 0x227570: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x227570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x227574: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227574u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227578: 0x0  nop
    ctx->pc = 0x227578u;
    // NOP
    // 0x22757c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x22757cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x227580: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227584: 0x0  nop
    ctx->pc = 0x227584u;
    // NOP
    // 0x227588: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x227588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x22758c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22758cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x227590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227594: 0x0  nop
    ctx->pc = 0x227594u;
    // NOP
    // 0x227598: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x227598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x22759c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x22759cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2275a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2275a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2275a4: 0x0  nop
    ctx->pc = 0x2275a4u;
    // NOP
    // 0x2275a8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2275a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2275ac: 0xa7a00054  sh          $zero, 0x54($sp)
    ctx->pc = 0x2275acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x2275b0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2275b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2275b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2275b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2275b8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2275b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2275bc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2275bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2275c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2275C0u;
    {
        const bool branch_taken_0x2275c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2275c0) {
            ctx->pc = 0x2275D0u;
            return;
        }
    }
    ctx->pc = 0x2275C8u;
    // 0x2275c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2275c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2275cc: 0xa7a20054  sh          $v0, 0x54($sp)
    ctx->pc = 0x2275ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2275d0u;
}
