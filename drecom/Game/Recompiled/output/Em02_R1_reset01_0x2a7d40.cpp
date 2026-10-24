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

// Function: Em02_R1_reset01
// Address: 0x2a7d40 - 0x2a85ec
void Em02_R1_reset01_0x2a7d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_reset01_0x2a7d40");
#endif

    switch (ctx->pc) {
        case 0x2a7dc4u: goto label_2a7dc4;
        case 0x2a7e4cu: goto label_2a7e4c;
        case 0x2a7eb8u: goto label_2a7eb8;
        case 0x2a7ed4u: goto label_2a7ed4;
        case 0x2a7eecu: goto label_2a7eec;
        case 0x2a7f24u: goto label_2a7f24;
        case 0x2a7f50u: goto label_2a7f50;
        case 0x2a7f5cu: goto label_2a7f5c;
        case 0x2a7f68u: goto label_2a7f68;
        case 0x2a7fa8u: goto label_2a7fa8;
        case 0x2a8010u: goto label_2a8010;
        case 0x2a802cu: goto label_2a802c;
        case 0x2a8060u: goto label_2a8060;
        case 0x2a8080u: goto label_2a8080;
        case 0x2a8090u: goto label_2a8090;
        case 0x2a809cu: goto label_2a809c;
        case 0x2a80a8u: goto label_2a80a8;
        case 0x2a814cu: goto label_2a814c;
        case 0x2a81b8u: goto label_2a81b8;
        case 0x2a8218u: goto label_2a8218;
        case 0x2a8234u: goto label_2a8234;
        case 0x2a8240u: goto label_2a8240;
        case 0x2a824cu: goto label_2a824c;
        case 0x2a8304u: goto label_2a8304;
        case 0x2a833cu: goto label_2a833c;
        case 0x2a8374u: goto label_2a8374;
        case 0x2a83acu: goto label_2a83ac;
        case 0x2a83e4u: goto label_2a83e4;
        case 0x2a841cu: goto label_2a841c;
        case 0x2a8430u: goto label_2a8430;
        case 0x2a845cu: goto label_2a845c;
        case 0x2a8474u: goto label_2a8474;
        case 0x2a848cu: goto label_2a848c;
        case 0x2a84acu: goto label_2a84ac;
        case 0x2a84c4u: goto label_2a84c4;
        case 0x2a84e4u: goto label_2a84e4;
        case 0x2a84f4u: goto label_2a84f4;
        case 0x2a8508u: goto label_2a8508;
        case 0x2a8514u: goto label_2a8514;
        case 0x2a8594u: goto label_2a8594;
        default: break;
    }

    ctx->pc = 0x2a7d40u;

    // 0x2a7d40: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2a7d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2a7d44: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2a7d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2a7d48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a7d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a7d4c: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x2a7d50: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7d54: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x2a7d54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2a7d58: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7d5c: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x2a7d5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2a7d60: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x2a7d60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2a7d64: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2a7d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a7d68: 0x10a601d2  beq         $a1, $a2, . + 4 + (0x1D2 << 2)
    ctx->pc = 0x2A7D68u;
    {
        const bool branch_taken_0x2a7d68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x2a7d68) {
            ctx->pc = 0x2A84B4u;
            goto label_2a84b4;
        }
    }
    ctx->pc = 0x2A7D70u;
    // 0x2a7d70: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a7d70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7d74: 0x10a70095  beq         $a1, $a3, . + 4 + (0x95 << 2)
    ctx->pc = 0x2A7D74u;
    {
        const bool branch_taken_0x2a7d74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x2a7d74) {
            ctx->pc = 0x2A7FCCu;
            goto label_2a7fcc;
        }
    }
    ctx->pc = 0x2A7D7Cu;
    // 0x2a7d7c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a7d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7d80: 0x10a8003e  beq         $a1, $t0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2A7D80u;
    {
        const bool branch_taken_0x2a7d80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        if (branch_taken_0x2a7d80) {
            ctx->pc = 0x2A7E7Cu;
            goto label_2a7e7c;
        }
    }
    ctx->pc = 0x2A7D88u;
    // 0x2a7d88: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7D88u;
    {
        const bool branch_taken_0x2a7d88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7d88) {
            ctx->pc = 0x2A7D98u;
            goto label_2a7d98;
        }
    }
    ctx->pc = 0x2A7D90u;
    // 0x2a7d90: 0x10000211  b           . + 4 + (0x211 << 2)
    ctx->pc = 0x2A7D90u;
    {
        const bool branch_taken_0x2a7d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7d90) {
            ctx->pc = 0x2A85D8u;
            goto label_2a85d8;
        }
    }
    ctx->pc = 0x2A7D98u;
label_2a7d98:
    // 0x2a7d98: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a7d98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7d9c: 0x8faa00c8  lw          $t2, 0xC8($sp)
    ctx->pc = 0x2a7d9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7da0: 0xa1490002  sb          $t1, 0x2($t2)
    ctx->pc = 0x2a7da0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x2a7da4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7da8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7dac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a7dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a7db0: 0x24060420  addiu       $a2, $zero, 0x420
    ctx->pc = 0x2a7db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x2a7db4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a7db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7db8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a7db8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a7dbc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A7DBCu;
    SET_GPR_U32(ctx, 31, 0x2A7DC4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A7DBCu, 0x2A7DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7DC4u;
label_2a7dc4:
    // 0x2a7dc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a7dc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7dc8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7dcc: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2a7dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2a7dd0: 0x3c04c120  lui         $a0, 0xC120
    ctx->pc = 0x2a7dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49440 << 16));
    // 0x2a7dd4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a7dd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7dd8: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7ddc: 0xe4a00184  swc1        $f0, 0x184($a1)
    ctx->pc = 0x2a7ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 388), bits); }
    // 0x2a7de0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a7de0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7de4: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2a7de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7de8: 0xe4c00188  swc1        $f0, 0x188($a2)
    ctx->pc = 0x2a7de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 392), bits); }
    // 0x2a7dec: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a7decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7df0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7df4: 0xa04710a8  sb          $a3, 0x10A8($v0)
    ctx->pc = 0x2a7df4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 7));
    // 0x2a7df8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7dfc: 0xc4810120  lwc1        $f1, 0x120($a0)
    ctx->pc = 0x2a7dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7e00: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a7e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a7e04: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2a7e04u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7e08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a7e08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a7e0c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2a7e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a7e10: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7e14: 0xc4a10128  lwc1        $f1, 0x128($a1)
    ctx->pc = 0x2a7e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7e18: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a7e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a7e1c: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2a7e1cu;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7e20: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a7e20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a7e24: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2a7e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a7e28: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2a7e28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7e2c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a7e2cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7e30: 0x0  nop
    ctx->pc = 0x2a7e30u;
    // NOP
    // 0x2a7e34: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2a7e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a7e38: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a7e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a7e3c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a7e3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a7e40: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2a7e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a7e44: 0xc040c24  jal         func_103090
    ctx->pc = 0x2A7E44u;
    SET_GPR_U32(ctx, 31, 0x2A7E4Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2A7E4Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A7E4Cu) { return; }
    ctx->pc = 0x2A7E4Cu;
label_2a7e4c:
    // 0x2a7e4c: 0x3c054120  lui         $a1, 0x4120
    ctx->pc = 0x2a7e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16672 << 16));
    // 0x2a7e50: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2a7e50u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a7e54: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a7e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7e58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a7e58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a7e5c: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2a7e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7e60: 0xe4c00180  swc1        $f0, 0x180($a2)
    ctx->pc = 0x2a7e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 384), bits); }
    // 0x2a7e64: 0x3c074120  lui         $a3, 0x4120
    ctx->pc = 0x2a7e64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16672 << 16));
    // 0x2a7e68: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2a7e68u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a7e6c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a7e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7e70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a7e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a7e74: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7e78: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2a7e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_2a7e7c:
    // 0x2a7e7c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a7e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7e80: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7e84: 0xa0a410a8  sb          $a0, 0x10A8($a1)
    ctx->pc = 0x2a7e84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a7e88: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7e8c: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2a7e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7e90: 0x3c033e8e  lui         $v1, 0x3E8E
    ctx->pc = 0x2a7e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16014 << 16));
    // 0x2a7e94: 0x3465fa35  ori         $a1, $v1, 0xFA35
    ctx->pc = 0x2a7e94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2a7e98: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a7e98u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a7e9c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2a7e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2a7ea0: 0xc4cc00d4  lwc1        $f12, 0xD4($a2)
    ctx->pc = 0x2a7ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a7ea4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2a7ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2a7ea8: 0x24a6dce0  addiu       $a2, $a1, -0x2320
    ctx->pc = 0x2a7ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958304));
    // 0x2a7eac: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a7eacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a7eb0: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A7EB0u;
    SET_GPR_U32(ctx, 31, 0x2A7EB8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A7EB0u, 0x2A7EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7EB8u;
label_2a7eb8:
    // 0x2a7eb8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2a7eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2a7ebc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7ec0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a7ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7ec4: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2a7ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7ec8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a7ec8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a7ecc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A7ECCu;
    SET_GPR_U32(ctx, 31, 0x2A7ED4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A7ECCu, 0x2A7ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7ED4u;
label_2a7ed4:
    // 0x2a7ed4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7ed8: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x2a7ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x2a7edc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7ee0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a7ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a7ee4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A7EE4u;
    SET_GPR_U32(ctx, 31, 0x2A7EECu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A7EE4u, 0x2A7EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7EECu;
label_2a7eec:
    // 0x2a7eec: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7ef0: 0x908209db  lbu         $v0, 0x9DB($a0)
    ctx->pc = 0x2a7ef0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x2a7ef4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2a7ef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7ef8: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x2a7ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x2a7efc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A7EFCu;
    {
        const bool branch_taken_0x2a7efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7efc) {
            ctx->pc = 0x2A7F40u;
            goto label_2a7f40;
        }
    }
    ctx->pc = 0x2A7F04u;
    // 0x2a7f04: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7f08: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7f0c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7f10: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a7f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a7f14: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x2a7f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x2a7f18: 0x24660180  addiu       $a2, $v1, 0x180
    ctx->pc = 0x2a7f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x2a7f1c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A7F1Cu;
    SET_GPR_U32(ctx, 31, 0x2A7F24u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A7F1Cu, 0x2A7F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F24u;
label_2a7f24:
    // 0x2a7f24: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7f28: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2a7f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7f2c: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x2a7f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x2a7f30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7f34: 0x0  nop
    ctx->pc = 0x2a7f34u;
    // NOP
    // 0x2a7f38: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a7f38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a7f3c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2a7f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_2a7f40:
    // 0x2a7f40: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7f44: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a7f44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a7f48: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A7F48u;
    SET_GPR_U32(ctx, 31, 0x2A7F50u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A7F48u, 0x2A7F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F50u;
label_2a7f50:
    // 0x2a7f50: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7f54: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A7F54u;
    SET_GPR_U32(ctx, 31, 0x2A7F5Cu);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A7F54u, 0x2A7F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F5Cu;
label_2a7f5c:
    // 0x2a7f5c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7f60: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A7F60u;
    SET_GPR_U32(ctx, 31, 0x2A7F68u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A7F60u, 0x2A7F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F68u;
label_2a7f68:
    // 0x2a7f68: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a7f68u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a7f6c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7f70: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x2a7f70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2a7f74: 0x10800198  beqz        $a0, . + 4 + (0x198 << 2)
    ctx->pc = 0x2A7F74u;
    {
        const bool branch_taken_0x2a7f74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7f74) {
            ctx->pc = 0x2A85D8u;
            goto label_2a85d8;
        }
    }
    ctx->pc = 0x2A7F7Cu;
    // 0x2a7f7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a7f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7f80: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7f84: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2a7f84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a7f88: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7f8c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7f90: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2a7f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x2a7f94: 0x24060421  addiu       $a2, $zero, 0x421
    ctx->pc = 0x2a7f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1057));
    // 0x2a7f98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a7f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7f9c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a7f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a7fa0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A7FA0u;
    SET_GPR_U32(ctx, 31, 0x2A7FA8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A7FA0u, 0x2A7FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7FA8u;
label_2a7fa8:
    // 0x2a7fa8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7fac: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x2a7facu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a7fb0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7fb4: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2a7fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a7fb8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2a7fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2a7fbc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7fc0: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x2a7fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a7fc4: 0x10000184  b           . + 4 + (0x184 << 2)
    ctx->pc = 0x2A7FC4u;
    {
        const bool branch_taken_0x2a7fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7fc4) {
            ctx->pc = 0x2A85D8u;
            goto label_2a85d8;
        }
    }
    ctx->pc = 0x2A7FCCu;
label_2a7fcc:
    // 0x2a7fcc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7fd0: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2a7fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a7fd4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2a7fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2a7fd8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2a7fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2a7fdc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2a7fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a7fe0: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2a7fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x2a7fe4: 0x3c023e8e  lui         $v0, 0x3E8E
    ctx->pc = 0x2a7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
    // 0x2a7fe8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a7fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a7fec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a7fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a7ff0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7ff4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7ff8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2a7ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a7ffc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2a7ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8000: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a8000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a8004: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a8004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a8008: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A8008u;
    SET_GPR_U32(ctx, 31, 0x2A8010u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A8008u, 0x2A8010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8010u;
label_2a8010:
    // 0x2a8010: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2a8010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2a8014: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a8014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8018: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a8018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a801c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2a801cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8020: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a8020u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8024: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A8024u;
    SET_GPR_U32(ctx, 31, 0x2A802Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A8024u, 0x2A802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A802Cu;
label_2a802c:
    // 0x2a802c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a802cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8030: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a8030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a8034: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a8034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8038: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2a8038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a803c: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x2a803cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x2a8040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8044: 0x0  nop
    ctx->pc = 0x2a8044u;
    // NOP
    // 0x2a8048: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a8048u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a804c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2a804cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2a8050: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a8050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8054: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a8054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a8058: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A8058u;
    SET_GPR_U32(ctx, 31, 0x2A8060u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A8058u, 0x2A8060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8060u;
label_2a8060:
    // 0x2a8060: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a8060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8064: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a8064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8068: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a8068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a806c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a806cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a8070: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2a8070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a8074: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2a8074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2a8078: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A8078u;
    SET_GPR_U32(ctx, 31, 0x2A8080u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A8078u, 0x2A8080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8080u;
label_2a8080:
    // 0x2a8080: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a8080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8084: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a8084u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a8088: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A8088u;
    SET_GPR_U32(ctx, 31, 0x2A8090u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A8088u, 0x2A8090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8090u;
label_2a8090:
    // 0x2a8090: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a8090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8094: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A8094u;
    SET_GPR_U32(ctx, 31, 0x2A809Cu);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A8094u, 0x2A809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A809Cu;
label_2a809c:
    // 0x2a809c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a809cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a80a0: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A80A0u;
    SET_GPR_U32(ctx, 31, 0x2A80A8u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A80A0u, 0x2A80A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A80A8u;
label_2a80a8:
    // 0x2a80a8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a80a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a80ac: 0x8483127c  lh          $v1, 0x127C($a0)
    ctx->pc = 0x2a80acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4732)));
    // 0x2a80b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a80b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a80b4: 0xa483127c  sh          $v1, 0x127C($a0)
    ctx->pc = 0x2a80b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a80b8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a80b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a80bc: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x2a80bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a80c0: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x2a80c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x2a80c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a80c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a80c8: 0x0  nop
    ctx->pc = 0x2a80c8u;
    // NOP
    // 0x2a80cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a80ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a80d0: 0x0  nop
    ctx->pc = 0x2a80d0u;
    // NOP
    // 0x2a80d4: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x2A80D4u;
    {
        const bool branch_taken_0x2a80d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a80d4) {
            ctx->pc = 0x2A81C8u;
            goto label_2a81c8;
        }
    }
    ctx->pc = 0x2A80DCu;
    // 0x2a80dc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a80dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a80e0: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x2a80e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a80e4: 0x3c03442f  lui         $v1, 0x442F
    ctx->pc = 0x2a80e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17455 << 16));
    // 0x2a80e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a80e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a80ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a80ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a80f0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2a80f0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a80f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a80f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a80f8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2a80f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a80fc: 0x0  nop
    ctx->pc = 0x2a80fcu;
    // NOP
    // 0x2a8100: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x2A8100u;
    {
        const bool branch_taken_0x2a8100 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8100) {
            ctx->pc = 0x2A81C8u;
            goto label_2a81c8;
        }
    }
    ctx->pc = 0x2A8108u;
    // 0x2a8108: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a8108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a810c: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2a810cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2a8110: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2a8110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2a8114: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a8114u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a8118: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x2a8118u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a811c: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x2A811Cu;
    {
        const bool branch_taken_0x2a811c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a811c) {
            ctx->pc = 0x2A81C8u;
            goto label_2a81c8;
        }
    }
    ctx->pc = 0x2A8124u;
    // 0x2a8124: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a8124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8128: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x2a8128u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x2a812c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2a812cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2a8130: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a8130u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a8134: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a8134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a8138: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2A8138u;
    {
        const bool branch_taken_0x2a8138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8138) {
            ctx->pc = 0x2A81C8u;
            goto label_2a81c8;
        }
    }
    ctx->pc = 0x2A8140u;
    // 0x2a8140: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a8140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a8144: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A8144u;
    SET_GPR_U32(ctx, 31, 0x2A814Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A8144u, 0x2A814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A814Cu;
label_2a814c:
    // 0x2a814c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a814cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8150: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2a8150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2a8154: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2a8154u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8158: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2a8158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a815c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2a815cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2a8160: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2a8160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2a8164: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2a8164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2a8168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a816c: 0x0  nop
    ctx->pc = 0x2a816cu;
    // NOP
    // 0x2a8170: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2a8170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a8174: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a8174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8178: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a8178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a817c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a817cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a8180: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a8180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a8184: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a8184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a8188: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a8188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a818c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a818cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a8190: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a8190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a8194: 0x34440007  ori         $a0, $v0, 0x7
    ctx->pc = 0x2a8194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x2a8198: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a8198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a819c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2a819cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a81a0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2a81a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a81a4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a81a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a81a8: 0x24470080  addiu       $a3, $v0, 0x80
    ctx->pc = 0x2a81a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2a81ac: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a81acu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a81b0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A81B0u;
    SET_GPR_U32(ctx, 31, 0x2A81B8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A81B0u, 0x2A81B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A81B8u;
label_2a81b8:
    // 0x2a81b8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a81b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a81bc: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x2a81bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x2a81c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a81c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a81c4: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x2a81c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
label_2a81c8:
    // 0x2a81c8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a81c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a81cc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a81ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a81d0: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2a81d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a81d4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a81d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a81d8: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2a81d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a81dc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a81dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a81e0: 0x0  nop
    ctx->pc = 0x2a81e0u;
    // NOP
    // 0x2a81e4: 0x450000fc  bc1f        . + 4 + (0xFC << 2)
    ctx->pc = 0x2A81E4u;
    {
        const bool branch_taken_0x2a81e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a81e4) {
            ctx->pc = 0x2A85D8u;
            goto label_2a85d8;
        }
    }
    ctx->pc = 0x2A81ECu;
    // 0x2a81ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a81ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a81f0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a81f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a81f4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a81f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a81f8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a81f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a81fc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a81fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8200: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a8200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a8204: 0x24060214  addiu       $a2, $zero, 0x214
    ctx->pc = 0x2a8204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
    // 0x2a8208: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a8208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a820c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a820cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a8210: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A8210u;
    SET_GPR_U32(ctx, 31, 0x2A8218u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A8210u, 0x2A8218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8218u;
label_2a8218:
    // 0x2a8218: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a8218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a821c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2a821cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2a8220: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x2A8220u;
    {
        const bool branch_taken_0x2a8220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8220) {
            ctx->pc = 0x2A8424u;
            goto label_2a8424;
        }
    }
    ctx->pc = 0x2A8228u;
    // 0x2a8228: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a8228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a822c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A822Cu;
    SET_GPR_U32(ctx, 31, 0x2A8234u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A822Cu, 0x2A8234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8234u;
label_2a8234:
    // 0x2a8234: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a8234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a8238: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A8238u;
    SET_GPR_U32(ctx, 31, 0x2A8240u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A8238u, 0x2A8240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8240u;
label_2a8240:
    // 0x2a8240: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a8240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a8244: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A8244u;
    SET_GPR_U32(ctx, 31, 0x2A824Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A8244u, 0x2A824Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A824Cu;
label_2a824c:
    // 0x2a824c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2a824cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2a8250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8254: 0x0  nop
    ctx->pc = 0x2a8254u;
    // NOP
    // 0x2a8258: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2a8258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2a825c: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2a825cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2a8260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8264: 0x0  nop
    ctx->pc = 0x2a8264u;
    // NOP
    // 0x2a8268: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2a8268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2a826c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2a826cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2a8270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8274: 0x0  nop
    ctx->pc = 0x2a8274u;
    // NOP
    // 0x2a8278: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2a8278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2a827c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a827cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a8280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8284: 0x0  nop
    ctx->pc = 0x2a8284u;
    // NOP
    // 0x2a8288: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2a8288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2a828c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a828cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8294: 0x0  nop
    ctx->pc = 0x2a8294u;
    // NOP
    // 0x2a8298: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2a8298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a829c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a829cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a82a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a82a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a82a4: 0x0  nop
    ctx->pc = 0x2a82a4u;
    // NOP
    // 0x2a82a8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2a82a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2a82ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a82acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a82b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a82b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a82b4: 0x0  nop
    ctx->pc = 0x2a82b4u;
    // NOP
    // 0x2a82b8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2a82b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2a82bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a82bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a82c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a82c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a82c4: 0x0  nop
    ctx->pc = 0x2a82c4u;
    // NOP
    // 0x2a82c8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a82c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2a82cc: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2a82ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2a82d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a82d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a82d4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a82d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a82d8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a82d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a82dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a82dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a82e0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a82e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a82e4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a82e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a82e8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a82e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a82ec: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a82ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a82f0: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a82f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a82f4: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a82f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a82f8: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a82f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a82fc: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A82FCu;
    SET_GPR_U32(ctx, 31, 0x2A8304u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A82FCu, 0x2A8304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8304u;
label_2a8304:
    // 0x2a8304: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2a8304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2a8308: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a8308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a830c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a830cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a8310: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a8310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a8314: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a8314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a8318: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a8318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a831c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a831cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a8320: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a8320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a8324: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a8324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a8328: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a8328u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a832c: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a832cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a8330: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a8330u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a8334: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A8334u;
    SET_GPR_U32(ctx, 31, 0x2A833Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A8334u, 0x2A833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A833Cu;
label_2a833c:
    // 0x2a833c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a833cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a8340: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a8340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a8344: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a8344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a8348: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2a8348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2a834c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a834cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a8350: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a8350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8354: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a8354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a8358: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a8358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a835c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a835cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a8360: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a8360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a8364: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a8364u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a8368: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a8368u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a836c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A836Cu;
    SET_GPR_U32(ctx, 31, 0x2A8374u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A836Cu, 0x2A8374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8374u;
label_2a8374:
    // 0x2a8374: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a8374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a8378: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a8378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a837c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a837cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a8380: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2a8380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2a8384: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a8384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a8388: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a8388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a838c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2a838cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2a8390: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a8390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a8394: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a8394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a8398: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a8398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a839c: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a839cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a83a0: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a83a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a83a4: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A83A4u;
    SET_GPR_U32(ctx, 31, 0x2A83ACu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A83A4u, 0x2A83ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A83ACu;
label_2a83ac:
    // 0x2a83ac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2a83acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2a83b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a83b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a83b4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a83b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a83b8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a83b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a83bc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a83bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a83c0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a83c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a83c4: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2a83c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2a83c8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a83c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a83cc: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a83ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a83d0: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a83d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a83d4: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a83d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a83d8: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a83d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a83dc: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A83DCu;
    SET_GPR_U32(ctx, 31, 0x2A83E4u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A83DCu, 0x2A83E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A83E4u;
label_2a83e4:
    // 0x2a83e4: 0x3c103c23  lui         $s0, 0x3C23
    ctx->pc = 0x2a83e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15395 << 16));
    // 0x2a83e8: 0x3603d70a  ori         $v1, $s0, 0xD70A
    ctx->pc = 0x2a83e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)55050);
    // 0x2a83ec: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a83ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a83f0: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x2a83f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x2a83f4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a83f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a83f8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a83f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a83fc: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a83fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a8400: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a8400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a8404: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a8404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a8408: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a8408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a840c: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a840cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a8410: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a8410u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a8414: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A8414u;
    SET_GPR_U32(ctx, 31, 0x2A841Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A8414u, 0x2A841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A841Cu;
label_2a841c:
    // 0x2a841c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2A841Cu;
    {
        const bool branch_taken_0x2a841c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a841c) {
            ctx->pc = 0x2A85D8u;
            goto label_2a85d8;
        }
    }
    ctx->pc = 0x2A8424u;
label_2a8424:
    // 0x2a8424: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a8424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a8428: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A8428u;
    SET_GPR_U32(ctx, 31, 0x2A8430u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A8428u, 0x2A8430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8430u;
label_2a8430:
    // 0x2a8430: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a8430u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a8434: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2a8434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8438: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a8438u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a843c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2a843cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a8440: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a8440u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a8444: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x2a8444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a8448: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a8448u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a844c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a844cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8450: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a8450u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a8454: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A8454u;
    SET_GPR_U32(ctx, 31, 0x2A845Cu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A8454u, 0x2A845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A845Cu;
label_2a845c:
    // 0x2a845c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a845cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8460: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a8460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a8464: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a8464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a8468: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a8468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a846c: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A846Cu;
    SET_GPR_U32(ctx, 31, 0x2A8474u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A846Cu, 0x2A8474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8474u;
label_2a8474:
    // 0x2a8474: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a8474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8478: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a8478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a847c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a847cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a8480: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a8480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8484: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A8484u;
    SET_GPR_U32(ctx, 31, 0x2A848Cu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A8484u, 0x2A848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A848Cu;
label_2a848c:
    // 0x2a848c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a848cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a8490: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a8490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8494: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a8494u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a8498: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a8498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a849c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a849cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a84a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a84a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a84a4: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A84A4u;
    SET_GPR_U32(ctx, 31, 0x2A84ACu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A84A4u, 0x2A84ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A84ACu;
label_2a84ac:
    // 0x2a84ac: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2A84ACu;
    {
        const bool branch_taken_0x2a84ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a84ac) {
            ctx->pc = 0x2A85D8u;
            goto label_2a85d8;
        }
    }
    ctx->pc = 0x2A84B4u;
label_2a84b4:
    // 0x2a84b4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a84b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a84b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a84b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a84bc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A84BCu;
    SET_GPR_U32(ctx, 31, 0x2A84C4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A84BCu, 0x2A84C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A84C4u;
label_2a84c4:
    // 0x2a84c4: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2a84c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a84c8: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a84c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a84cc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a84ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a84d0: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x2a84d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x2a84d4: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x2a84d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x2a84d8: 0x24660180  addiu       $a2, $v1, 0x180
    ctx->pc = 0x2a84d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x2a84dc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A84DCu;
    SET_GPR_U32(ctx, 31, 0x2A84E4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A84DCu, 0x2A84E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A84E4u;
label_2a84e4:
    // 0x2a84e4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a84e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a84e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a84e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a84ec: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A84ECu;
    SET_GPR_U32(ctx, 31, 0x2A84F4u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A84ECu, 0x2A84F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A84F4u;
label_2a84f4:
    // 0x2a84f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a84f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a84f8: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a84f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a84fc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a84fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a8500: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A8500u;
    SET_GPR_U32(ctx, 31, 0x2A8508u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A8500u, 0x2A8508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8508u;
label_2a8508:
    // 0x2a8508: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a8508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a850c: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A850Cu;
    SET_GPR_U32(ctx, 31, 0x2A8514u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A850Cu, 0x2A8514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8514u;
label_2a8514:
    // 0x2a8514: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a8514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8518: 0x3c043f33  lui         $a0, 0x3F33
    ctx->pc = 0x2a8518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16179 << 16));
    // 0x2a851c: 0x34833333  ori         $v1, $a0, 0x3333
    ctx->pc = 0x2a851cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x2a8520: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a8520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8524: 0xc4a00180  lwc1        $f0, 0x180($a1)
    ctx->pc = 0x2a8524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8528: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a8528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a852c: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x2a852cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
    // 0x2a8530: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a8530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8534: 0x3c043f33  lui         $a0, 0x3F33
    ctx->pc = 0x2a8534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16179 << 16));
    // 0x2a8538: 0x34833333  ori         $v1, $a0, 0x3333
    ctx->pc = 0x2a8538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x2a853c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a853cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8540: 0xc4a00188  lwc1        $f0, 0x188($a1)
    ctx->pc = 0x2a8540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8544: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a8544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8548: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x2a8548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x2a854c: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a854cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8550: 0x90a609e7  lbu         $a2, 0x9E7($a1)
    ctx->pc = 0x2a8550u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x2a8554: 0x10c00020  beqz        $a2, . + 4 + (0x20 << 2)
    ctx->pc = 0x2A8554u;
    {
        const bool branch_taken_0x2a8554 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8554) {
            ctx->pc = 0x2A85D8u;
            goto label_2a85d8;
        }
    }
    ctx->pc = 0x2A855Cu;
    // 0x2a855c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a855cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8560: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a8560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8564: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2a8564u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a8568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a8568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a856c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a856cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8570: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x2a8570u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a8574: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a8574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8578: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2a8578u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a857c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a857cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8580: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2a8580u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a8584: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a8584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8588: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a8588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a858c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A858Cu;
    SET_GPR_U32(ctx, 31, 0x2A8594u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A858Cu, 0x2A8594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8594u;
label_2a8594:
    // 0x2a8594: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a8594u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a8598: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2a8598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2a859c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a859cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a85a0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A85A0u;
    {
        const bool branch_taken_0x2a85a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a85a0) {
            ctx->pc = 0x2A85D8u;
            goto label_2a85d8;
        }
    }
    ctx->pc = 0x2A85A8u;
    // 0x2a85a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a85a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a85ac: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a85acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a85b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a85b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a85b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a85b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a85b8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a85b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a85bc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2a85bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a85c0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a85c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a85c4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2a85c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a85c8: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a85c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a85cc: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x2a85ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a85d0: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2a85d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a85d4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2a85d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_2a85d8:
    // 0x2a85d8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2a85d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a85dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a85dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a85e0: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2a85e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a85e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A85E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A85E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A85ECu;
}
