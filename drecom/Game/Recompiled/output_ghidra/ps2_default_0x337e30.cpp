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

// Function: default
// Address: 0x337e30 - 0x337f04
void ps2_default_0x337e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x337e30");
#endif

    switch (ctx->pc) {
        case 0x337e58u: goto label_337e58;
        default: break;
    }

    ctx->pc = 0x337e30u;

    // 0x337e30: 0x8e026870  lw          $v0, 0x6870($s0)
    ctx->pc = 0x337e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26736)));
    // 0x337e34: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x337e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x337e38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x337e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x337e3c: 0xae026870  sw          $v0, 0x6870($s0)
    ctx->pc = 0x337e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26736), GPR_U32(ctx, 2));
    // 0x337e40: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x337e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x337e44: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x337e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x337e48: 0x24452728  addiu       $a1, $v0, 0x2728
    ctx->pc = 0x337e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10024));
    // 0x337e4c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x337e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x337e50: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x337E50u;
    SET_GPR_U32(ctx, 31, 0x337E58u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x337E58u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x337E58u) { return; }
    ctx->pc = 0x337E58u;
label_337e58:
    // 0x337e58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x337e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x337e5c: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x337e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    // 0x337e60: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x337e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x337e64: 0x24524ed0  addiu       $s2, $v0, 0x4ED0
    ctx->pc = 0x337e64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 20176));
    // 0x337e68: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x337e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x337e6c: 0x24514fa0  addiu       $s1, $v0, 0x4FA0
    ctx->pc = 0x337e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 20384));
    // 0x337e70: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x337e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x337e74: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x337e74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x894ED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894ED0u, _value); } while (0);
    // 0x337e78: 0x3c028800  lui         $v0, 0x8800
    ctx->pc = 0x337e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34816 << 16));
    // 0x337e7c: 0x34423b14  ori         $v0, $v0, 0x3B14
    ctx->pc = 0x337e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15124);
    // 0x337e80: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x337e80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894ED4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894ED4u, _value); } while (0);
    // 0x337e84: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337e88: 0x94224eb4  lhu         $v0, 0x4EB4($at)
    ctx->pc = 0x337e88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894EB4u));
    // 0x337e8c: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x337e8cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337e90: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337e94: 0x94234eb0  lhu         $v1, 0x4EB0($at)
    ctx->pc = 0x337e94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x894EB0u));
    // 0x337e98: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x337e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x337e9c: 0x3c21023  subu        $v0, $fp, $v0
    ctx->pc = 0x337e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x337ea0: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x337ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x337ea4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337ea8: 0x94224eb6  lhu         $v0, 0x4EB6($at)
    ctx->pc = 0x337ea8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894EB6u));
    // 0x337eac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337eb0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337eb4: 0x94234eb2  lhu         $v1, 0x4EB2($at)
    ctx->pc = 0x337eb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x894EB2u));
    // 0x337eb8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x337eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x337ebc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x337ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x337ec0: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x337ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x337ec4: 0x24150100  addiu       $s5, $zero, 0x100
    ctx->pc = 0x337ec4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x337ec8: 0x241600e0  addiu       $s6, $zero, 0xE0
    ctx->pc = 0x337ec8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x337ecc: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x337eccu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337ed0: 0x0  nop
    ctx->pc = 0x337ed0u;
    // NOP
    // 0x337ed4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x337ed4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x337ed8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x337ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x337edc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x337edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x337ee0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x337ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x337ee4: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x337ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x337ee8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x337EE8u;
    {
        const bool branch_taken_0x337ee8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x337ee8) {
            ctx->pc = 0x337F04u;
            return;
        }
    }
    ctx->pc = 0x337EF0u;
    // 0x337ef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337ef4: 0x0  nop
    ctx->pc = 0x337ef4u;
    // NOP
    // 0x337ef8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x337ef8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x337efc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x337EFCu;
    {
        const bool branch_taken_0x337efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337efc) {
            ctx->pc = 0x337F20u;
            return;
        }
    }
    ctx->pc = 0x337F04u;
}
