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

// Function: entry_0036cb20
// Address: 0x36cb20 - 0x36cb90
void entry_0036cb20_0x36cb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036cb20_0x36cb20");
#endif

    ctx->pc = 0x36cb20u;

    // 0x36cb20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36cb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cb24: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36cb28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cb2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cb30: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x36cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x36cb34: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x36cb34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36cb38: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36cb3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cb40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cb44: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x36cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x36cb48: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x36cb48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36cb4c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36cb50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cb54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cb58: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x36cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x36cb5c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x36cb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36cb60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cb64: 0xc44200d4  lwc1        $f2, 0xD4($v0)
    ctx->pc = 0x36cb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36cb68: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x36cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x36cb6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36cb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36cb70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36cb70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36cb74: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36CB74u;
    {
        const bool branch_taken_0x36cb74 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x36cb74) {
            ctx->pc = 0x36CB90u;
            return;
        }
    }
    ctx->pc = 0x36CB7Cu;
    // 0x36cb7c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x36cb7cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36cb80: 0x0  nop
    ctx->pc = 0x36cb80u;
    // NOP
    // 0x36cb84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36cb84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x36cb88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36CB88u;
    {
        const bool branch_taken_0x36cb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36cb88) {
            ctx->pc = 0x36CBACu;
            return;
        }
    }
    ctx->pc = 0x36CB90u;
}
