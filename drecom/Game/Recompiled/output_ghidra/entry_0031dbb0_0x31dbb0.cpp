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

// Function: entry_0031dbb0
// Address: 0x31dbb0 - 0x31dc6c
void entry_0031dbb0_0x31dbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031dbb0_0x31dbb0");
#endif

    switch (ctx->pc) {
        case 0x31dbccu: goto label_31dbcc;
        case 0x31dbfcu: goto label_31dbfc;
        case 0x31dc30u: goto label_31dc30;
        default: break;
    }

    ctx->pc = 0x31dbb0u;

    // 0x31dbb0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31dbb4: 0x8c62129c  lw          $v0, 0x129C($v1)
    ctx->pc = 0x31dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4764)));
    // 0x31dbb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31dbbc: 0xac62129c  sw          $v0, 0x129C($v1)
    ctx->pc = 0x31dbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4764), GPR_U32(ctx, 2));
    // 0x31dbc0: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x31dbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31dbc4: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x31DBC4u;
    SET_GPR_U32(ctx, 31, 0x31DBCCu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x31DBC4u, 0x31DBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DBCCu;
label_31dbcc:
    // 0x31dbcc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31dbd0: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x31dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x31dbd4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31dbd4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31dbd8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x31dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31dbdc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31dbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31dbe0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31dbe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31dbe4: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x31dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x31dbe8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31dbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31dbec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x31dbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31dbf0: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x31dbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x31dbf4: 0xc040c80  jal         func_103200
    ctx->pc = 0x31DBF4u;
    SET_GPR_U32(ctx, 31, 0x31DBFCu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x31DBFCu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31DBFCu) { return; }
    ctx->pc = 0x31DBFCu;
label_31dbfc:
    // 0x31dbfc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x31dbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31dc00: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x31dc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31dc04: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x31dc04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31dc08: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x31dc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31dc0c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x31dc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31dc10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31dc10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31dc14: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31dc14u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31dc18: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x31dc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31dc1c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x31dc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31dc20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31dc20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31dc24: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x31dc24u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x31dc28: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x31DC28u;
    SET_GPR_U32(ctx, 31, 0x31DC30u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x31DC28u, 0x31DC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DC30u;
label_31dc30:
    // 0x31dc30: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x31dc30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x31dc34: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x31dc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31dc38: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x31dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x31dc3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31dc3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31dc40: 0x0  nop
    ctx->pc = 0x31dc40u;
    // NOP
    // 0x31dc44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31dc44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31dc48: 0x0  nop
    ctx->pc = 0x31dc48u;
    // NOP
    // 0x31dc4c: 0x450000a0  bc1f        . + 4 + (0xA0 << 2)
    ctx->pc = 0x31DC4Cu;
    {
        const bool branch_taken_0x31dc4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31dc4c) {
            ctx->pc = 0x31DED0u;
            return;
        }
    }
    ctx->pc = 0x31DC54u;
    // 0x31dc54: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x31dc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31dc58: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x31dc58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31dc5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31dc60: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x31dc60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x31dc64: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x31DC64u;
    {
        const bool branch_taken_0x31dc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dc64) {
            ctx->pc = 0x31DED0u;
            return;
        }
    }
    ctx->pc = 0x31DC6Cu;
}
