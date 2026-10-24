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

// Function: Om19_R1_mv00
// Address: 0x315db0 - 0x316210
void Om19_R1_mv00_0x315db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om19_R1_mv00_0x315db0");
#endif

    switch (ctx->pc) {
        case 0x315dfcu: goto label_315dfc;
        case 0x315e48u: goto label_315e48;
        case 0x315ec0u: goto label_315ec0;
        case 0x315f78u: goto label_315f78;
        case 0x315fe8u: goto label_315fe8;
        case 0x3160dcu: goto label_3160dc;
        case 0x3160fcu: goto label_3160fc;
        case 0x31616cu: goto label_31616c;
        default: break;
    }

    ctx->pc = 0x315db0u;

    // 0x315db0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x315db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x315db4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x315db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x315db8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x315db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x315dbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x315dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x315dc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x315dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x315dc4: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x315dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x315dc8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x315dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315dcc: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x315dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x315dd0: 0x24710320  addiu       $s1, $v1, 0x320
    ctx->pc = 0x315dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 800));
    // 0x315dd4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x315dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x315dd8: 0x24720080  addiu       $s2, $v1, 0x80
    ctx->pc = 0x315dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x315ddc: 0x3c03391d  lui         $v1, 0x391D
    ctx->pc = 0x315ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14621 << 16));
    // 0x315de0: 0x34634952  ori         $v1, $v1, 0x4952
    ctx->pc = 0x315de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18770);
    // 0x315de4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x315de4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315de8: 0x0  nop
    ctx->pc = 0x315de8u;
    // NOP
    // 0x315dec: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x315decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x315df0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x315df0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x315df4: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x315DF4u;
    {
        const bool branch_taken_0x315df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315df4) {
            ctx->pc = 0x3161E8u;
            goto label_3161e8;
        }
    }
    ctx->pc = 0x315DFCu;
label_315dfc:
    // 0x315dfc: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x315dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x315e00: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x315e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315e04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x315e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x315e08: 0x8c64128c  lw          $a0, 0x128C($v1)
    ctx->pc = 0x315e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x315e0c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x315e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x315e10: 0x108300ee  beq         $a0, $v1, . + 4 + (0xEE << 2)
    ctx->pc = 0x315E10u;
    {
        const bool branch_taken_0x315e10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x315e10) {
            ctx->pc = 0x3161CCu;
            goto label_3161cc;
        }
    }
    ctx->pc = 0x315E18u;
    // 0x315e18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x315e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x315e1c: 0x1083008a  beq         $a0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x315E1Cu;
    {
        const bool branch_taken_0x315e1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x315e1c) {
            ctx->pc = 0x316048u;
            goto label_316048;
        }
    }
    ctx->pc = 0x315E24u;
    // 0x315e24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x315e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x315e28: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x315E28u;
    {
        const bool branch_taken_0x315e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x315e28) {
            ctx->pc = 0x315EF0u;
            goto label_315ef0;
        }
    }
    ctx->pc = 0x315E30u;
    // 0x315e30: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x315E30u;
    {
        const bool branch_taken_0x315e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x315e30) {
            ctx->pc = 0x315E40u;
            goto label_315e40;
        }
    }
    ctx->pc = 0x315E38u;
    // 0x315e38: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x315E38u;
    {
        const bool branch_taken_0x315e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315e38) {
            ctx->pc = 0x3161E0u;
            goto label_3161e0;
        }
    }
    ctx->pc = 0x315E40u;
label_315e40:
    // 0x315e40: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x315E40u;
    SET_GPR_U32(ctx, 31, 0x315E48u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x315E40u, 0x315E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315E48u;
label_315e48:
    // 0x315e48: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x315e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x315e4c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x315e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x315e50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315e50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315e54: 0x0  nop
    ctx->pc = 0x315e54u;
    // NOP
    // 0x315e58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x315e58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315e5c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x315e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x315e60: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x315e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x315e64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315e68: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x315e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315e6c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x315e6cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x315e70: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x315e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x315e74: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x315e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315e78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x315e7c: 0xe44012cc  swc1        $f0, 0x12CC($v0)
    ctx->pc = 0x315e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4812), bits); }
    // 0x315e80: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x315e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x315e84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315e88: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x315e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315e8c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x315e8cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x315e90: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x315e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x315e94: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x315e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x315e98: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x315e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315e9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x315ea0: 0xe44012cc  swc1        $f0, 0x12CC($v0)
    ctx->pc = 0x315ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4812), bits); }
    // 0x315ea4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x315ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x315ea8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x315ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x315eac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x315eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315eb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x315eb4: 0xac44128c  sw          $a0, 0x128C($v0)
    ctx->pc = 0x315eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 4));
    // 0x315eb8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x315EB8u;
    SET_GPR_U32(ctx, 31, 0x315EC0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x315EB8u, 0x315EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315EC0u;
label_315ec0:
    // 0x315ec0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x315ec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x315ec4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x315ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x315ec8: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x315ec8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x315ecc: 0x0  nop
    ctx->pc = 0x315eccu;
    // NOP
    // 0x315ed0: 0x0  nop
    ctx->pc = 0x315ed0u;
    // NOP
    // 0x315ed4: 0x2810  mfhi        $a1
    ctx->pc = 0x315ed4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x315ed8: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x315ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x315edc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x315edcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x315ee0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x315ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315ee4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x315ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x315ee8: 0xac65128c  sw          $a1, 0x128C($v1)
    ctx->pc = 0x315ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 5));
    // 0x315eec: 0x0  nop
    ctx->pc = 0x315eecu;
    // NOP
label_315ef0:
    // 0x315ef0: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x315ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x315ef4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x315ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x315ef8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x315ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315efc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x315efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x315f00: 0xc46112cc  lwc1        $f1, 0x12CC($v1)
    ctx->pc = 0x315f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x315f04: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x315f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315f08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x315f08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x315f0c: 0xe46012cc  swc1        $f0, 0x12CC($v1)
    ctx->pc = 0x315f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4812), bits); }
    // 0x315f10: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x315f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x315f14: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x315f14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x315f18: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x315f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315f1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x315f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x315f20: 0xc46112cc  lwc1        $f1, 0x12CC($v1)
    ctx->pc = 0x315f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x315f24: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x315f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315f28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x315f28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x315f2c: 0x0  nop
    ctx->pc = 0x315f2cu;
    // NOP
    // 0x315f30: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x315F30u;
    {
        const bool branch_taken_0x315f30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x315f30) {
            ctx->pc = 0x315F6Cu;
            goto label_315f6c;
        }
    }
    ctx->pc = 0x315F38u;
    // 0x315f38: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x315f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315f3c: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x315f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x315f40: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x315f40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x315f44: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x315f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315f48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x315f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x315f4c: 0xe46012cc  swc1        $f0, 0x12CC($v1)
    ctx->pc = 0x315f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4812), bits); }
    // 0x315f50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x315f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x315f54: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x315f54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x315f58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x315f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315f5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x315f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x315f60: 0xac65128c  sw          $a1, 0x128C($v1)
    ctx->pc = 0x315f60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 5));
    // 0x315f64: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x315F64u;
    {
        const bool branch_taken_0x315f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315f64) {
            ctx->pc = 0x3161E0u;
            goto label_3161e0;
        }
    }
    ctx->pc = 0x315F6Cu;
label_315f6c:
    // 0x315f6c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x315f6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x315f70: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x315F70u;
    SET_GPR_U32(ctx, 31, 0x315F78u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x315F78u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x315F78u) { return; }
    ctx->pc = 0x315F78u;
label_315f78:
    // 0x315f78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x315f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315f7c: 0x0  nop
    ctx->pc = 0x315f7cu;
    // NOP
    // 0x315f80: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x315f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x315f84: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x315f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x315f88: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x315f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x315f8c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x315f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x315f90: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x315f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315f94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x315f98: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x315f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x315f9c: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x315f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x315fa0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x315fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x315fa4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x315fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315fa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x315fac: 0xc44012cc  lwc1        $f0, 0x12CC($v0)
    ctx->pc = 0x315facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315fb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x315fb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x315fb4: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x315fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x315fb8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x315fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x315fbc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x315fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x315fc4: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x315fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x315fc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x315fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x315fcc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x315fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x315fd0: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x315fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x315fd4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x315fd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x315fd8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x315fd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x315fdc: 0x26260104  addiu       $a2, $s1, 0x104
    ctx->pc = 0x315fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x315fe0: 0xc040d62  jal         func_103588
    ctx->pc = 0x315FE0u;
    SET_GPR_U32(ctx, 31, 0x315FE8u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x315FE8u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x315FE8u) { return; }
    ctx->pc = 0x315FE8u;
label_315fe8:
    // 0x315fe8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x315fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315fec: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x315fecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x315ff0: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x315ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x315ff4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x315ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x315ff8: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x315ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315ffc: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x315ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x316000: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x316000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x316004: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x316004u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x316008: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x316008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x31600c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31600cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x316010: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x316010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x316014: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x316014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x316018: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x316018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31601c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31601cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x316020: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x316020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x316024: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x316024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x316028: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x316028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31602c: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x31602cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x316030: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x316030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x316034: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x316034u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316038: 0x0  nop
    ctx->pc = 0x316038u;
    // NOP
    // 0x31603c: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x31603cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x316040: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x316040u;
    {
        const bool branch_taken_0x316040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x316040) {
            ctx->pc = 0x3161E0u;
            goto label_3161e0;
        }
    }
    ctx->pc = 0x316048u;
label_316048:
    // 0x316048: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x316048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x31604c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31604cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x316050: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x316050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x316054: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316058: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x316058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31605c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x31605cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x316060: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x316060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x316064: 0xe44012cc  swc1        $f0, 0x12CC($v0)
    ctx->pc = 0x316064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4812), bits); }
    // 0x316068: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x316068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x31606c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31606cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x316070: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316074: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x316074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x316078: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x316078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x31607c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31607cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x316080: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x316080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x316084: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316088: 0xc44012cc  lwc1        $f0, 0x12CC($v0)
    ctx->pc = 0x316088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31608c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31608cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x316090: 0x0  nop
    ctx->pc = 0x316090u;
    // NOP
    // 0x316094: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x316094u;
    {
        const bool branch_taken_0x316094 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x316094) {
            ctx->pc = 0x3160F0u;
            goto label_3160f0;
        }
    }
    ctx->pc = 0x31609Cu;
    // 0x31609c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x31609cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3160a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3160a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3160a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3160a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3160a8: 0xc44012cc  lwc1        $f0, 0x12CC($v0)
    ctx->pc = 0x3160a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3160ac: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x3160acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x3160b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3160b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3160b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3160b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3160b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3160b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3160bc: 0xe44012cc  swc1        $f0, 0x12CC($v0)
    ctx->pc = 0x3160bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4812), bits); }
    // 0x3160c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3160c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3160c4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3160c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3160c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3160c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3160cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3160ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3160d0: 0xac44128c  sw          $a0, 0x128C($v0)
    ctx->pc = 0x3160d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 4));
    // 0x3160d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3160D4u;
    SET_GPR_U32(ctx, 31, 0x3160DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3160D4u, 0x3160DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3160DCu;
label_3160dc:
    // 0x3160dc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x3160dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3160e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3160e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3160e4: 0xac6412ac  sw          $a0, 0x12AC($v1)
    ctx->pc = 0x3160e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4780), GPR_U32(ctx, 4));
    // 0x3160e8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3160E8u;
    {
        const bool branch_taken_0x3160e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3160e8) {
            ctx->pc = 0x3161E0u;
            goto label_3161e0;
        }
    }
    ctx->pc = 0x3160F0u;
label_3160f0:
    // 0x3160f0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x3160f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3160f4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x3160F4u;
    SET_GPR_U32(ctx, 31, 0x3160FCu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x3160FCu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3160FCu) { return; }
    ctx->pc = 0x3160FCu;
label_3160fc:
    // 0x3160fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3160fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316100: 0x0  nop
    ctx->pc = 0x316100u;
    // NOP
    // 0x316104: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x316104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x316108: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x316108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x31610c: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x31610cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x316110: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x316110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x316114: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x316114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x316118: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31611c: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x31611cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x316120: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x316120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x316124: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x316124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x316128: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x316128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31612c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31612cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316130: 0xc44012cc  lwc1        $f0, 0x12CC($v0)
    ctx->pc = 0x316130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x316134: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x316134u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x316138: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x316138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x31613c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31613cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x316140: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x316140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x316144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316148: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x316148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x31614c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31614cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x316150: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x316150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x316154: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x316154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x316158: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x316158u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x31615c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x31615cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x316160: 0x26260104  addiu       $a2, $s1, 0x104
    ctx->pc = 0x316160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x316164: 0xc040d62  jal         func_103588
    ctx->pc = 0x316164u;
    SET_GPR_U32(ctx, 31, 0x31616Cu);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x31616Cu;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31616Cu) { return; }
    ctx->pc = 0x31616Cu;
label_31616c:
    // 0x31616c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31616cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x316170: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x316170u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x316174: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x316174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x316178: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x316178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31617c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x31617cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x316180: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x316180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x316184: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x316184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x316188: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x316188u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31618c: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x31618cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x316190: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x316190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x316194: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x316194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x316198: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x316198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x31619c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31619cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3161a0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3161a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3161a4: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x3161a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x3161a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3161a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3161ac: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x3161acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3161b0: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x3161b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x3161b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3161b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3161b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3161b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3161bc: 0x0  nop
    ctx->pc = 0x3161bcu;
    // NOP
    // 0x3161c0: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x3161c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x3161c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3161C4u;
    {
        const bool branch_taken_0x3161c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3161c4) {
            ctx->pc = 0x3161E0u;
            goto label_3161e0;
        }
    }
    ctx->pc = 0x3161CCu;
label_3161cc:
    // 0x3161cc: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x3161ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3161d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3161d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3161d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3161d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3161d8: 0xac60128c  sw          $zero, 0x128C($v1)
    ctx->pc = 0x3161d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 0));
    // 0x3161dc: 0x0  nop
    ctx->pc = 0x3161dcu;
    // NOP
label_3161e0:
    // 0x3161e0: 0x26310190  addiu       $s1, $s1, 0x190
    ctx->pc = 0x3161e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x3161e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3161e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3161e8:
    // 0x3161e8: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x3161e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3161ec: 0x1460ff03  bnez        $v1, . + 4 + (-0xFD << 2)
    ctx->pc = 0x3161ECu;
    {
        const bool branch_taken_0x3161ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3161ec) {
            ctx->pc = 0x315DFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315dfc;
        }
    }
    ctx->pc = 0x3161F4u;
    // 0x3161f4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x3161f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3161f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3161f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3161fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3161fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316200: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x316200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316204: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x316204u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x316208: 0x3e00008  jr          $ra
    ctx->pc = 0x316208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316210u;
}
