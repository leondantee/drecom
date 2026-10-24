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

// Function: entry_00180d58
// Address: 0x180d58 - 0x180ea4
void entry_00180d58_0x180d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180d58_0x180d58");
#endif

    ctx->pc = 0x180d58u;

    // 0x180d58: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180d5c: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180d5cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180d60: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x180d60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180d64: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x180d64u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x180d68: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x180d68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x180d6c: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x180d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x180d70: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x180d70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180d74: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x180d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x180d78: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x180d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x180d7c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x180d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x180d80: 0xc4610180  lwc1        $f1, 0x180($v1)
    ctx->pc = 0x180d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180d84: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180d88: 0xe421f1f0  swc1        $f1, -0xE10($at)
    ctx->pc = 0x180d88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1F0u, _value); } while (0); }
    // 0x180d8c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180d90: 0x8426f138  lh          $a2, -0xEC8($at)
    ctx->pc = 0x180d90u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x47F138u));
    // 0x180d94: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x180d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x180d98: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180d98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180d9c: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x180d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180da0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x180da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x180da4: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x180da4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180da8: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x180da8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x180dac: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x180dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x180db0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x180db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x180db4: 0xc4600170  lwc1        $f0, 0x170($v1)
    ctx->pc = 0x180db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180db8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180dbc: 0xe420f1f8  swc1        $f0, -0xE08($at)
    ctx->pc = 0x180dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1F8u, _value); } while (0); }
    // 0x180dc0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180dc4: 0x8426f138  lh          $a2, -0xEC8($at)
    ctx->pc = 0x180dc4u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x47F138u));
    // 0x180dc8: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x180dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x180dcc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180dccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180dd0: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x180dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180dd4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x180dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x180dd8: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x180dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180ddc: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x180ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x180de0: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x180de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x180de4: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x180de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x180de8: 0xc4e10170  lwc1        $f1, 0x170($a3)
    ctx->pc = 0x180de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180dec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180df0: 0xe421f200  swc1        $f1, -0xE00($at)
    ctx->pc = 0x180df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F200u, _value); } while (0); }
    // 0x180df4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180df8: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x180df8u;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180dfc: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x180dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x180e00: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180e04: 0xc421f200  lwc1        $f1, -0xE00($at)
    ctx->pc = 0x180e04u;
    { uint32_t bits = FAST_READ32(0x47F200u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180e08: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180e0c: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x180e0cu;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180e10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x180e10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180e14: 0x0  nop
    ctx->pc = 0x180e14u;
    // NOP
    // 0x180e18: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x180E18u;
    {
        const bool branch_taken_0x180e18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180e18) {
            ctx->pc = 0x180EA4u;
            return;
        }
    }
    ctx->pc = 0x180E20u;
    // 0x180e20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x180e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180e24: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180e28: 0xac26f1e8  sw          $a2, -0xE18($at)
    ctx->pc = 0x180e28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x47F1E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E8u, _value); } while (0);
    // 0x180e2c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180e30: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180e30u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180e34: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x180e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180e38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180e38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180e3c: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x180e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180e40: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x180e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x180e44: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x180e44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180e48: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x180e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x180e4c: 0x24671380  addiu       $a3, $v1, 0x1380
    ctx->pc = 0x180e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x180e50: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x180e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x180e54: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x180e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x180e58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x180e58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180e5c: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x180e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180e60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x180e60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x180e64: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180e68: 0xe420f1e0  swc1        $f0, -0xE20($at)
    ctx->pc = 0x180e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E0u, _value); } while (0); }
    // 0x180e6c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180e70: 0xc421f200  lwc1        $f1, -0xE00($at)
    ctx->pc = 0x180e70u;
    { uint32_t bits = FAST_READ32(0x47F200u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180e74: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180e78: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x180e78u;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180e7c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x180e7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x180e80: 0x3c064040  lui         $a2, 0x4040
    ctx->pc = 0x180e80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16448 << 16));
    // 0x180e84: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x180e84u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x180e88: 0x0  nop
    ctx->pc = 0x180e88u;
    // NOP
    // 0x180e8c: 0x460c0343  div.s       $f13, $f0, $f12
    ctx->pc = 0x180e8cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x180e90: 0x0  nop
    ctx->pc = 0x180e90u;
    // NOP
    // 0x180e94: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180e98: 0xe42df1d8  swc1        $f13, -0xE28($at)
    ctx->pc = 0x180e98u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1D8u, _value); } while (0); }
    // 0x180e9c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x180E9Cu;
    {
        const bool branch_taken_0x180e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180e9c) {
            ctx->pc = 0x180F1Cu;
            return;
        }
    }
    ctx->pc = 0x180EA4u;
}
