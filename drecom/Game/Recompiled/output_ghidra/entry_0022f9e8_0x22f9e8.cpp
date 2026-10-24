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

// Function: entry_0022f9e8
// Address: 0x22f9e8 - 0x22fae8
void entry_0022f9e8_0x22f9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f9e8_0x22f9e8");
#endif

    switch (ctx->pc) {
        case 0x22fa5cu: goto label_22fa5c;
        default: break;
    }

    ctx->pc = 0x22f9e8u;

    // 0x22f9e8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f9ec: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x22f9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f9f0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22f9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22f9f4: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x22f9f4u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f9f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22f9f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22f9fc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x22f9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x22fa00: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x22fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x22fa04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22fa04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22fa08: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22fa08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22fa0c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22fa0cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fa10: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22fa10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22fa14: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fa18: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x22fa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fa1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22fa1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22fa20: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x22fa20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x22fa24: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fa28: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x22fa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fa2c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22fa2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22fa30: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x22fa30u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fa34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22fa34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22fa38: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x22fa38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x22fa3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22fa40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22fa40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22fa44: 0x0  nop
    ctx->pc = 0x22fa44u;
    // NOP
    // 0x22fa48: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x22fa48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x22fa4c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22fa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22fa50: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22fa50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22fa54: 0xc040c24  jal         func_103090
    ctx->pc = 0x22FA54u;
    SET_GPR_U32(ctx, 31, 0x22FA5Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x22FA5Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x22FA5Cu) { return; }
    ctx->pc = 0x22FA5Cu;
label_22fa5c:
    // 0x22fa5c: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x22fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x22fa60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22fa60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22fa64: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x22fa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fa68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22fa68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22fa6c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fa70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fa74: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x22fa74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x22fa78: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x22fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x22fa7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22fa7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22fa80: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x22fa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fa84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22fa84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22fa88: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fa8c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fa90: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x22fa90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x22fa94: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x22fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x22fa98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22fa98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22fa9c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x22fa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22faa0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22faa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22faa4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22faa8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22faac: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x22faacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x22fab0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fab4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fab8: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x22fab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22fabc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x22fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x22fac0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22fac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22fac4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22FAC4u;
    {
        const bool branch_taken_0x22fac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fac4) {
            ctx->pc = 0x22FAE8u;
            return;
        }
    }
    ctx->pc = 0x22FACCu;
    // 0x22facc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22faccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22fad0: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x22fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x22fad4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22fad8: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x22fad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x22fadc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22fadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22fae0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22fae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22fae4: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x22fae4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    ctx->pc = 0x22fae8u;
}
