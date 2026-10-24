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

// Function: entry_00259b30
// Address: 0x259b30 - 0x259ba0
void entry_00259b30_0x259b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00259b30_0x259b30");
#endif

    ctx->pc = 0x259b30u;

    // 0x259b30: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259b34: 0x904209e4  lbu         $v0, 0x9E4($v0)
    ctx->pc = 0x259b34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2532)));
    // 0x259b38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x259b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x259b3c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x259b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x259b40: 0x1440ff71  bnez        $v0, . + 4 + (-0x8F << 2)
    ctx->pc = 0x259B40u;
    {
        const bool branch_taken_0x259b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259b40) {
            ctx->pc = 0x259908u;
            return;
        }
    }
    ctx->pc = 0x259B48u;
    // 0x259b48: 0x13c00031  beqz        $fp, . + 4 + (0x31 << 2)
    ctx->pc = 0x259B48u;
    {
        const bool branch_taken_0x259b48 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x259b48) {
            ctx->pc = 0x259C10u;
            return;
        }
    }
    ctx->pc = 0x259B50u;
    // 0x259b50: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x259b50u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x259b54: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259b58: 0xa05e09e5  sb          $fp, 0x9E5($v0)
    ctx->pc = 0x259b58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2533), (uint8_t)GPR_U32(ctx, 30));
    // 0x259b5c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259b60: 0xa05e09e6  sb          $fp, 0x9E6($v0)
    ctx->pc = 0x259b60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2534), (uint8_t)GPR_U32(ctx, 30));
    // 0x259b64: 0x97a20100  lhu         $v0, 0x100($sp)
    ctx->pc = 0x259b64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x259b68: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x259b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x259b6c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x259b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x259b70: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x259B70u;
    {
        const bool branch_taken_0x259b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259b70) {
            ctx->pc = 0x259BA0u;
            return;
        }
    }
    ctx->pc = 0x259B78u;
    // 0x259b78: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259b7c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x259b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x259b80: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x259b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x259b84: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259b88: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x259b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259b8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x259b8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x259b90: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259b94: 0xe44009c8  swc1        $f0, 0x9C8($v0)
    ctx->pc = 0x259b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2504), bits); }
    // 0x259b98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x259B98u;
    {
        const bool branch_taken_0x259b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259b98) {
            ctx->pc = 0x259BB0u;
            return;
        }
    }
    ctx->pc = 0x259BA0u;
}
