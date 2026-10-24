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

// Function: entry_0031daa4
// Address: 0x31daa4 - 0x31dbb0
void entry_0031daa4_0x31daa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031daa4_0x31daa4");
#endif

    switch (ctx->pc) {
        case 0x31daf8u: goto label_31daf8;
        case 0x31db3cu: goto label_31db3c;
        case 0x31db50u: goto label_31db50;
        case 0x31db64u: goto label_31db64;
        case 0x31db78u: goto label_31db78;
        case 0x31db8cu: goto label_31db8c;
        default: break;
    }

    ctx->pc = 0x31daa4u;

    // 0x31daa4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31daa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31daa8: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x31daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x31daac: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x31daacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x31dab0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31dab0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31dab4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x31dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31dab8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31dab8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31dabc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x31dabcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31dac0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x31dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x31dac4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x31dac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x31dac8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x31dac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x31dacc: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31daccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31dad0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31dad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31dad4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x31dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x31dad8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x31dad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x31dadc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x31dadcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x31dae0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x31dae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x31dae4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x31dae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31dae8: 0x27a60108  addiu       $a2, $sp, 0x108
    ctx->pc = 0x31dae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x31daec: 0x27a7010c  addiu       $a3, $sp, 0x10C
    ctx->pc = 0x31daecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x31daf0: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x31DAF0u;
    SET_GPR_U32(ctx, 31, 0x31DAF8u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x31DAF0u, 0x31DAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DAF8u;
label_31daf8:
    // 0x31daf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31daf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31dafc: 0x0  nop
    ctx->pc = 0x31dafcu;
    // NOP
    // 0x31db00: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x31db00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x31db04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31db04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31db08: 0x0  nop
    ctx->pc = 0x31db08u;
    // NOP
    // 0x31db0c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x31db0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x31db10: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x31db10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x31db14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31db14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31db18: 0x0  nop
    ctx->pc = 0x31db18u;
    // NOP
    // 0x31db1c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x31db1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x31db20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31db20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31db24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31db24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31db28: 0x0  nop
    ctx->pc = 0x31db28u;
    // NOP
    // 0x31db2c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x31db2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x31db30: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31db30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31db34: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x31DB34u;
    SET_GPR_U32(ctx, 31, 0x31DB3Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x31DB3Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31DB3Cu) { return; }
    ctx->pc = 0x31DB3Cu;
label_31db3c:
    // 0x31db3c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31db3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31db40: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x31db40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31db44: 0xc7ac0108  lwc1        $f12, 0x108($sp)
    ctx->pc = 0x31db44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31db48: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x31DB48u;
    SET_GPR_U32(ctx, 31, 0x31DB50u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x31DB50u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31DB50u) { return; }
    ctx->pc = 0x31DB50u;
label_31db50:
    // 0x31db50: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x31db50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x31db54: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x31db54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31db58: 0xc7ac010c  lwc1        $f12, 0x10C($sp)
    ctx->pc = 0x31db58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31db5c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x31DB5Cu;
    SET_GPR_U32(ctx, 31, 0x31DB64u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x31DB64u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31DB64u) { return; }
    ctx->pc = 0x31DB64u;
label_31db64:
    // 0x31db64: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31db64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31db68: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x31db68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31db6c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x31db6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x31db70: 0xc040c00  jal         func_103000
    ctx->pc = 0x31DB70u;
    SET_GPR_U32(ctx, 31, 0x31DB78u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x31DB78u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31DB78u) { return; }
    ctx->pc = 0x31DB78u;
label_31db78:
    // 0x31db78: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31db78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31db7c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x31db7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31db80: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31db80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31db84: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x31DB84u;
    SET_GPR_U32(ctx, 31, 0x31DB8Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x31DB8Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31DB8Cu) { return; }
    ctx->pc = 0x31DB8Cu;
label_31db8c:
    // 0x31db8c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31db90: 0x8c62128c  lw          $v0, 0x128C($v1)
    ctx->pc = 0x31db90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x31db94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31db94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31db98: 0xac62128c  sw          $v0, 0x128C($v1)
    ctx->pc = 0x31db98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 2));
    // 0x31db9c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x31db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31dba0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31dba0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31dba4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31dba8: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x31dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x31dbac: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31dbacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->pc = 0x31dbb0u;
}
