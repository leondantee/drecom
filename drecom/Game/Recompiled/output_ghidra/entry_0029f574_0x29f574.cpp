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

// Function: entry_0029f574
// Address: 0x29f574 - 0x29f5e4
void entry_0029f574_0x29f574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029f574_0x29f574");
#endif

    ctx->pc = 0x29f574u;

    // 0x29f574: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f578: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29f578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29f57c: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x29f57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f580: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f584: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x29f584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f588: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x29f588u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f58c: 0x0  nop
    ctx->pc = 0x29f58cu;
    // NOP
    // 0x29f590: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x29F590u;
    {
        const bool branch_taken_0x29f590 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f590) {
            ctx->pc = 0x29F5E4u;
            return;
        }
    }
    ctx->pc = 0x29F598u;
    // 0x29f598: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f59c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29f59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29f5a0: 0x94630048  lhu         $v1, 0x48($v1)
    ctx->pc = 0x29f5a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x29f5a4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29f5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29f5a8: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x29f5a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x29f5ac: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x29F5ACu;
    {
        const bool branch_taken_0x29f5ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f5ac) {
            ctx->pc = 0x29F5E4u;
            return;
        }
    }
    ctx->pc = 0x29F5B4u;
    // 0x29f5b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29f5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f5b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f5bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29f5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f5c0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x29f5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29f5c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f5c8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29f5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f5cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f5d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29f5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f5d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f5d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29f5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f5dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f5e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29f5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29f5e4u;
}
