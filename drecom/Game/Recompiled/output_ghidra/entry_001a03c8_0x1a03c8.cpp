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

// Function: entry_001a03c8
// Address: 0x1a03c8 - 0x1a0428
void entry_001a03c8_0x1a03c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a03c8_0x1a03c8");
#endif

    ctx->pc = 0x1a03c8u;

    // 0x1a03c8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1a03c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1a03cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a03ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a03d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1a03d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a03d4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a03d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a03d8: 0x24421b40  addiu       $v0, $v0, 0x1B40
    ctx->pc = 0x1a03d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x1a03dc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1a03dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a03e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a03e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a03e4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A03E4u;
    {
        const bool branch_taken_0x1a03e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a03e4) {
            ctx->pc = 0x1A0428u;
            return;
        }
    }
    ctx->pc = 0x1A03ECu;
    // 0x1a03ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a03ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a03f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a03f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a03f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a03f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a03f8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1a03f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a03fc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1a03fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a0400: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1a0400u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1a0404: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1a0404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0408: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1a0408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1a040c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0410: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a0410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a0414: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a0414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a0418: 0xa6020028  sh          $v0, 0x28($s0)
    ctx->pc = 0x1a0418u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a041c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1a041cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a0420: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A0420u;
    {
        const bool branch_taken_0x1a0420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0420) {
            ctx->pc = 0x1A0450u;
            return;
        }
    }
    ctx->pc = 0x1A0428u;
}
