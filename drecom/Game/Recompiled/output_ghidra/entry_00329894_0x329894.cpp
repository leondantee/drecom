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

// Function: entry_00329894
// Address: 0x329894 - 0x3298d8
void entry_00329894_0x329894(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329894_0x329894");
#endif

    ctx->pc = 0x329894u;

    // 0x329894: 0x86040010  lh          $a0, 0x10($s0)
    ctx->pc = 0x329894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x329898: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x329898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x32989c: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x32989cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x3298a0: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x3298a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3298a4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3298a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3298a8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3298a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3298ac: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x3298ACu;
    {
        const bool branch_taken_0x3298ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3298ac) {
            ctx->pc = 0x3298D8u;
            return;
        }
    }
    ctx->pc = 0x3298B4u;
    // 0x3298b4: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x3298b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x3298b8: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x3298b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x3298bc: 0x864310a6  lh          $v1, 0x10A6($s2)
    ctx->pc = 0x3298bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x3298c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3298c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3298c4: 0x0  nop
    ctx->pc = 0x3298c4u;
    // NOP
    // 0x3298c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3298c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3298cc: 0xe6002824  swc1        $f0, 0x2824($s0)
    ctx->pc = 0x3298ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 10276), bits); }
    // 0x3298d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3298d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3298d4: 0xa2032904  sb          $v1, 0x2904($s0)
    ctx->pc = 0x3298d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10500), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x3298d8u;
}
