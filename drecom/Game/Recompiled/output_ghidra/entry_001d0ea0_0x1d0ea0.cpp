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

// Function: entry_001d0ea0
// Address: 0x1d0ea0 - 0x1d0f34
void entry_001d0ea0_0x1d0ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0ea0_0x1d0ea0");
#endif

    switch (ctx->pc) {
        case 0x1d0eacu: goto label_1d0eac;
        case 0x1d0ed0u: goto label_1d0ed0;
        case 0x1d0efcu: goto label_1d0efc;
        default: break;
    }

    ctx->pc = 0x1d0ea0u;

    // 0x1d0ea0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d0ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0ea4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1D0EA4u;
    SET_GPR_U32(ctx, 31, 0x1D0EACu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1D0EA4u, 0x1D0EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0EACu;
label_1d0eac:
    // 0x1d0eac: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x1d0eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x1d0eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0eb4: 0x0  nop
    ctx->pc = 0x1d0eb4u;
    // NOP
    // 0x1d0eb8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1d0eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1d0ebc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d0ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d0ec0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1d0ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d0ec4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1d0ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0ec8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1D0EC8u;
    SET_GPR_U32(ctx, 31, 0x1D0ED0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1D0ED0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D0ED0u) { return; }
    ctx->pc = 0x1D0ED0u;
label_1d0ed0:
    // 0x1d0ed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0ed4: 0xa2020060  sb          $v0, 0x60($s0)
    ctx->pc = 0x1d0ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0ed8: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d0ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0edc: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1d0edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1d0ee0: 0xa6000062  sh          $zero, 0x62($s0)
    ctx->pc = 0x1d0ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d0ee4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d0ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d0ee8: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1d0ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1d0eec: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d0eecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d0ef0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1d0ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d0ef4: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D0EF4u;
    SET_GPR_U32(ctx, 31, 0x1D0EFCu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D0EFCu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D0EFCu) { return; }
    ctx->pc = 0x1D0EFCu;
label_1d0efc:
    // 0x1d0efc: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1d0efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d0f00: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1d0f00u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d0f04: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x1d0f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d0f08: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d0f08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d0f0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0f0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0f10: 0x0  nop
    ctx->pc = 0x1d0f10u;
    // NOP
    // 0x1d0f14: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x1d0f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x1d0f18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0f1c: 0x0  nop
    ctx->pc = 0x1d0f1cu;
    // NOP
    // 0x1d0f20: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x1d0f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1d0f24: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d0f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d0f28: 0xa2030061  sb          $v1, 0x61($s0)
    ctx->pc = 0x1d0f28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d0f2c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1D0F2Cu;
    {
        const bool branch_taken_0x1d0f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0f2c) {
            ctx->pc = 0x1D10E8u;
            return;
        }
    }
    ctx->pc = 0x1D0F34u;
}
