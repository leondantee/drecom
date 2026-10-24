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

// Function: entry_0029e488
// Address: 0x29e488 - 0x29e4f8
void entry_0029e488_0x29e488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029e488_0x29e488");
#endif

    ctx->pc = 0x29e488u;

    // 0x29e488: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e48c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e490: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x29e490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e494: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e498: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x29e498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e49c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x29e49cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e4a0: 0x0  nop
    ctx->pc = 0x29e4a0u;
    // NOP
    // 0x29e4a4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x29E4A4u;
    {
        const bool branch_taken_0x29e4a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29e4a4) {
            ctx->pc = 0x29E4F8u;
            return;
        }
    }
    ctx->pc = 0x29E4ACu;
    // 0x29e4ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e4b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e4b4: 0x94630048  lhu         $v1, 0x48($v1)
    ctx->pc = 0x29e4b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x29e4b8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29e4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29e4bc: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x29e4bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x29e4c0: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x29E4C0u;
    {
        const bool branch_taken_0x29e4c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e4c0) {
            ctx->pc = 0x29E4F8u;
            return;
        }
    }
    ctx->pc = 0x29E4C8u;
    // 0x29e4c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e4cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e4d0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29e4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e4d4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x29e4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29e4d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e4dc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29e4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e4e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e4e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29e4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e4e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e4ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29e4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e4f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e4f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29e4f8u;
}
