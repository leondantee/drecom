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

// Function: entry_0034daf8
// Address: 0x34daf8 - 0x34dc14
void entry_0034daf8_0x34daf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034daf8_0x34daf8");
#endif

    switch (ctx->pc) {
        case 0x34db44u: goto label_34db44;
        case 0x34db54u: goto label_34db54;
        case 0x34db68u: goto label_34db68;
        case 0x34db7cu: goto label_34db7c;
        case 0x34dbd4u: goto label_34dbd4;
        default: break;
    }

    ctx->pc = 0x34daf8u;

    // 0x34daf8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dafc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34db00: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x34db00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34db04: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34db04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34db08: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x34db08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34db0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34db0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34db10: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x34db10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x34db14: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34db14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34db18: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34db18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34db1c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x34db1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34db20: 0x3c024128  lui         $v0, 0x4128
    ctx->pc = 0x34db20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16680 << 16));
    // 0x34db24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34db24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34db28: 0x0  nop
    ctx->pc = 0x34db28u;
    // NOP
    // 0x34db2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34db2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34db30: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x34db30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x34db34: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34db34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34db38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34db38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34db3c: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34DB3Cu;
    SET_GPR_U32(ctx, 31, 0x34DB44u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34DB3Cu, 0x34DB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DB44u;
label_34db44:
    // 0x34db44: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34db44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34db48: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34db48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34db4c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34DB4Cu;
    SET_GPR_U32(ctx, 31, 0x34DB54u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34DB4Cu, 0x34DB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DB54u;
label_34db54:
    // 0x34db54: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34db54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34db58: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x34db58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x34db5c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x34db5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x34db60: 0xc040c9e  jal         func_103278
    ctx->pc = 0x34DB60u;
    SET_GPR_U32(ctx, 31, 0x34DB68u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x34DB68u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x34DB68u) { return; }
    ctx->pc = 0x34DB68u;
label_34db68:
    // 0x34db68: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34db68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34db6c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x34db6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x34db70: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x34db70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x34db74: 0xc040c9e  jal         func_103278
    ctx->pc = 0x34DB74u;
    SET_GPR_U32(ctx, 31, 0x34DB7Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x34DB7Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x34DB7Cu) { return; }
    ctx->pc = 0x34DB7Cu;
label_34db7c:
    // 0x34db7c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34db80: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x34db80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34db84: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x34db84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34db88: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34db88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34db8c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34db90: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x34db90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34db94: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34db94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34db98: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x34db98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34db9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34db9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34dba0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x34dba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x34dba4: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x34dba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34dba8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x34dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x34dbac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34dbacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dbb0: 0x0  nop
    ctx->pc = 0x34dbb0u;
    // NOP
    // 0x34dbb4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34dbb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34dbb8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x34dbb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x34dbbc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x34dbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x34dbc0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x34dbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x34dbc4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x34dbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x34dbc8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x34dbc8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34dbcc: 0xc059e1c  jal         func_167870
    ctx->pc = 0x34DBCCu;
    SET_GPR_U32(ctx, 31, 0x34DBD4u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x34DBCCu, 0x34DBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DBD4u;
label_34dbd4:
    // 0x34dbd4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x34dbd4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34dbd8: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x34dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x34dbdc: 0x34642400  ori         $a0, $v1, 0x2400
    ctx->pc = 0x34dbdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x34dbe0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34dbe0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dbe4: 0x0  nop
    ctx->pc = 0x34dbe4u;
    // NOP
    // 0x34dbe8: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x34dbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x34dbec: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x34DBECu;
    {
        const bool branch_taken_0x34dbec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dbec) {
            ctx->pc = 0x34DC14u;
            return;
        }
    }
    ctx->pc = 0x34DBF4u;
    // 0x34dbf4: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x34dbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dbf8: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x34dbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x34dbfc: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x34dbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dc00: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dc04: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34dc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34dc08: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x34dc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x34dc0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34DC0Cu;
    {
        const bool branch_taken_0x34dc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dc0c) {
            ctx->pc = 0x34DC2Cu;
            return;
        }
    }
    ctx->pc = 0x34DC14u;
}
