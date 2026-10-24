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

// Function: Om18_R1_mv02
// Address: 0x318380 - 0x3187c0
void Om18_R1_mv02_0x318380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om18_R1_mv02_0x318380");
#endif

    switch (ctx->pc) {
        case 0x3183ecu: goto label_3183ec;
        case 0x31849cu: goto label_31849c;
        case 0x3184e8u: goto label_3184e8;
        case 0x318504u: goto label_318504;
        case 0x318590u: goto label_318590;
        case 0x31859cu: goto label_31859c;
        case 0x318614u: goto label_318614;
        default: break;
    }

    ctx->pc = 0x318380u;

    // 0x318380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x318380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x318384: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x318384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x318388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x318388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31838c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x31838cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x318390: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x318390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x318394: 0x24639c00  addiu       $v1, $v1, -0x6400
    ctx->pc = 0x318394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941696));
    // 0x318398: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x318398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31839c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x31839cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399C00u));
    // 0x3183a0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3183a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3183a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3183a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3183a8: 0x8c7012a4  lw          $s0, 0x12A4($v1)
    ctx->pc = 0x3183a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4772)));
    // 0x3183ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3183acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3183b0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3183b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3183b4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3183b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3183b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3183b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3183bc: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3183BCu;
    {
        const bool branch_taken_0x3183bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3183bc) {
            ctx->pc = 0x318424u;
            goto label_318424;
        }
    }
    ctx->pc = 0x3183C4u;
    // 0x3183c4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3183C4u;
    {
        const bool branch_taken_0x3183c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3183c4) {
            ctx->pc = 0x3183D4u;
            goto label_3183d4;
        }
    }
    ctx->pc = 0x3183CCu;
    // 0x3183cc: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x3183CCu;
    {
        const bool branch_taken_0x3183cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3183cc) {
            ctx->pc = 0x3187ACu;
            goto label_3187ac;
        }
    }
    ctx->pc = 0x3183D4u;
label_3183d4:
    // 0x3183d4: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x3183d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x3183d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3183d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3183dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3183dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3183e0: 0xe44012d0  swc1        $f0, 0x12D0($v0)
    ctx->pc = 0x3183e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4816), bits); }
    // 0x3183e4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3183E4u;
    SET_GPR_U32(ctx, 31, 0x3183ECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3183E4u, 0x3183ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3183ECu;
label_3183ec:
    // 0x3183ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3183ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3183f0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3183f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3183f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3183F4u;
    {
        const bool branch_taken_0x3183f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3183f4) {
            ctx->pc = 0x31840Cu;
            goto label_31840c;
        }
    }
    ctx->pc = 0x3183FCu;
    // 0x3183fc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3183fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x318400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318404: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x318404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318408: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x318408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_31840c:
    // 0x31840c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31840cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318410: 0xac40128c  sw          $zero, 0x128C($v0)
    ctx->pc = 0x318410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 0));
    // 0x318414: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318418: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x318418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x31841c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31841cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x318420: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x318420u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_318424:
    // 0x318424: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x318424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318428: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x318428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x31842c: 0xc461010c  lwc1        $f1, 0x10C($v1)
    ctx->pc = 0x31842cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318430: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x318430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x318434: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x318434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x318438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31843c: 0x0  nop
    ctx->pc = 0x31843cu;
    // NOP
    // 0x318440: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318444: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x318444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x318448: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x318448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31844c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x31844cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x318450: 0xc441010c  lwc1        $f1, 0x10C($v0)
    ctx->pc = 0x318450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318454: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x318454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x318458: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x318458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x31845c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31845cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318460: 0x0  nop
    ctx->pc = 0x318460u;
    // NOP
    // 0x318464: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x318464u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318468: 0x0  nop
    ctx->pc = 0x318468u;
    // NOP
    // 0x31846c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x31846Cu;
    {
        const bool branch_taken_0x31846c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31846c) {
            ctx->pc = 0x31848Cu;
            goto label_31848c;
        }
    }
    ctx->pc = 0x318474u;
    // 0x318474: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x318474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x318478: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x318478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x31847c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31847cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318480: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x318480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318484: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x318484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x318488: 0xe440010c  swc1        $f0, 0x10C($v0)
    ctx->pc = 0x318488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 268), bits); }
label_31848c:
    // 0x31848c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31848cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318490: 0x8c4402d0  lw          $a0, 0x2D0($v0)
    ctx->pc = 0x318490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x318494: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x318494u;
    SET_GPR_U32(ctx, 31, 0x31849Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x31849Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31849Cu) { return; }
    ctx->pc = 0x31849Cu;
label_31849c:
    // 0x31849c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31849cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3184a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3184a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3184a4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3184a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3184a8: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x3184a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x3184ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3184acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3184b0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3184b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3184b4: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x3184b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x3184b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3184b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3184bc: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3184bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3184c0: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x3184c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x3184c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3184c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3184c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3184c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3184cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3184ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3184d0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3184d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3184d4: 0x8c8402d0  lw          $a0, 0x2D0($a0)
    ctx->pc = 0x3184d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x3184d8: 0x8c6502d0  lw          $a1, 0x2D0($v1)
    ctx->pc = 0x3184d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3184dc: 0x24460104  addiu       $a2, $v0, 0x104
    ctx->pc = 0x3184dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
    // 0x3184e0: 0xc040d62  jal         func_103588
    ctx->pc = 0x3184E0u;
    SET_GPR_U32(ctx, 31, 0x3184E8u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x3184E8u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3184E8u) { return; }
    ctx->pc = 0x3184E8u;
label_3184e8:
    // 0x3184e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3184e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3184ec: 0xc44012d0  lwc1        $f0, 0x12D0($v0)
    ctx->pc = 0x3184ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3184f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3184f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3184f4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x3184f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x3184f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3184f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3184fc: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x3184FCu;
    SET_GPR_U32(ctx, 31, 0x318504u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x3184FCu, 0x318504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318504u;
label_318504:
    // 0x318504: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x318504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318508: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x318508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x31850c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31850cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x318510: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x318510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318514: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x318514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x318518: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x318518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x31851c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31851cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x318520: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x318520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318524: 0x0  nop
    ctx->pc = 0x318524u;
    // NOP
    // 0x318528: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x318528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x31852c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31852cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318530: 0x0  nop
    ctx->pc = 0x318530u;
    // NOP
    // 0x318534: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x318534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x318538: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x318538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x31853c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31853cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318540: 0x0  nop
    ctx->pc = 0x318540u;
    // NOP
    // 0x318544: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x318544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x318548: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x318548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31854c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31854cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318550: 0x0  nop
    ctx->pc = 0x318550u;
    // NOP
    // 0x318554: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x318554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x318558: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x318558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x31855c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x31855cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x318560: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x318560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x318564: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318568: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x318568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x31856c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31856cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x318570: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x318570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x318574: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x318574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x318578: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x318578u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31857c: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x31857cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x318580: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x318580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x318584: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x318584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x318588: 0xc086488  jal         func_219220
    ctx->pc = 0x318588u;
    SET_GPR_U32(ctx, 31, 0x318590u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x318588u, 0x318590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318590u;
label_318590:
    // 0x318590: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x318590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318594: 0xc0c6aac  jal         func_31AAB0
    ctx->pc = 0x318594u;
    SET_GPR_U32(ctx, 31, 0x31859Cu);
    ctx->pc = 0x31AAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AAB0u, 0x318594u, 0x31859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31859Cu;
label_31859c:
    // 0x31859c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x31859Cu;
    {
        const bool branch_taken_0x31859c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31859c) {
            ctx->pc = 0x3185D8u;
            goto label_3185d8;
        }
    }
    ctx->pc = 0x3185A4u;
    // 0x3185a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3185a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3185a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3185a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3185ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3185acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3185b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3185b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3185b4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3185b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3185b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3185b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3185bc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3185bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3185c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3185c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3185c4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3185c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3185c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3185c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3185cc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3185ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3185d0: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x3185D0u;
    {
        const bool branch_taken_0x3185d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3185d0) {
            ctx->pc = 0x3187ACu;
            goto label_3187ac;
        }
    }
    ctx->pc = 0x3185D8u;
label_3185d8:
    // 0x3185d8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3185d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3185dc: 0x9022edae  lbu         $v0, -0x1252($at)
    ctx->pc = 0x3185dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEDAEu));
    // 0x3185e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3185E0u;
    {
        const bool branch_taken_0x3185e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3185e0) {
            ctx->pc = 0x3185F4u;
            goto label_3185f4;
        }
    }
    ctx->pc = 0x3185E8u;
    // 0x3185e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3185e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3185ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3185ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3185f0: 0xac431294  sw          $v1, 0x1294($v0)
    ctx->pc = 0x3185f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4756), GPR_U32(ctx, 3));
label_3185f4:
    // 0x3185f4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3185f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3185f8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x3185f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3185fc: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x3185fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x318600: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x318600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x318604: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x318604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x318608: 0x2447ae90  addiu       $a3, $v0, -0x5170
    ctx->pc = 0x318608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946448));
    // 0x31860c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x31860Cu;
    SET_GPR_U32(ctx, 31, 0x318614u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x31860Cu, 0x318614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318614u;
label_318614:
    // 0x318614: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x318614u;
    {
        const bool branch_taken_0x318614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318614) {
            ctx->pc = 0x318684u;
            goto label_318684;
        }
    }
    ctx->pc = 0x31861Cu;
    // 0x31861c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31861cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318620: 0x8c631294  lw          $v1, 0x1294($v1)
    ctx->pc = 0x318620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4756)));
    // 0x318624: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x318624u;
    {
        const bool branch_taken_0x318624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x318624) {
            ctx->pc = 0x318648u;
            goto label_318648;
        }
    }
    ctx->pc = 0x31862Cu;
    // 0x31862c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31862cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x318630: 0x9023edae  lbu         $v1, -0x1252($at)
    ctx->pc = 0x318630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3EEDAEu));
    // 0x318634: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x318634u;
    {
        const bool branch_taken_0x318634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x318634) {
            ctx->pc = 0x318648u;
            goto label_318648;
        }
    }
    ctx->pc = 0x31863Cu;
    // 0x31863c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31863cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318640: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318644: 0xac6412a0  sw          $a0, 0x12A0($v1)
    ctx->pc = 0x318644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4768), GPR_U32(ctx, 4));
label_318648:
    // 0x318648: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31864c: 0xac601294  sw          $zero, 0x1294($v1)
    ctx->pc = 0x31864cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4756), GPR_U32(ctx, 0));
    // 0x318650: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x318650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x318654: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318658: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x318658u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31865c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31865cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318660: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x318660u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x318664: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318668: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x318668u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31866c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31866cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318670: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x318670u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x318674: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318678: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x318678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x31867c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x31867Cu;
    {
        const bool branch_taken_0x31867c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31867c) {
            ctx->pc = 0x3187ACu;
            goto label_3187ac;
        }
    }
    ctx->pc = 0x318684u;
label_318684:
    // 0x318684: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x318684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318688: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x318688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31868c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x31868cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x318690: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x318690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x318694: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318698: 0x0  nop
    ctx->pc = 0x318698u;
    // NOP
    // 0x31869c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31869cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3186a0: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x3186a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x3186a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3186a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3186a8: 0xc48101a4  lwc1        $f1, 0x1A4($a0)
    ctx->pc = 0x3186a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3186ac: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x3186acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x3186b0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x3186b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x3186b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3186b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3186b8: 0x0  nop
    ctx->pc = 0x3186b8u;
    // NOP
    // 0x3186bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3186bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3186c0: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x3186c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x3186c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3186c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3186c8: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x3186c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3186cc: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x3186ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x3186d0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x3186d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x3186d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3186d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3186d8: 0x0  nop
    ctx->pc = 0x3186d8u;
    // NOP
    // 0x3186dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3186dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3186e0: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x3186e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x3186e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3186e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3186e8: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x3186e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3186ec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3186ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3186f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3186f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3186f4: 0x0  nop
    ctx->pc = 0x3186f4u;
    // NOP
    // 0x3186f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3186f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3186fc: 0x0  nop
    ctx->pc = 0x3186fcu;
    // NOP
    // 0x318700: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x318700u;
    {
        const bool branch_taken_0x318700 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x318700) {
            ctx->pc = 0x31875Cu;
            goto label_31875c;
        }
    }
    ctx->pc = 0x318708u;
    // 0x318708: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x318708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31870c: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x31870cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318710: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x318710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x318714: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318714u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318718: 0x0  nop
    ctx->pc = 0x318718u;
    // NOP
    // 0x31871c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31871cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318720: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x318720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x318724: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x318724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318728: 0xc48101a4  lwc1        $f1, 0x1A4($a0)
    ctx->pc = 0x318728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31872c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31872cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x318730: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318730u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318734: 0x0  nop
    ctx->pc = 0x318734u;
    // NOP
    // 0x318738: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318738u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31873c: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x31873cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x318740: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x318740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318744: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x318744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318748: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x318748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31874c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31874cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318750: 0x0  nop
    ctx->pc = 0x318750u;
    // NOP
    // 0x318754: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318758: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x318758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
label_31875c:
    // 0x31875c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31875cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318760: 0x8c83128c  lw          $v1, 0x128C($a0)
    ctx->pc = 0x318760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x318764: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x318768: 0xac83128c  sw          $v1, 0x128C($a0)
    ctx->pc = 0x318768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4748), GPR_U32(ctx, 3));
    // 0x31876c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31876cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318770: 0x8c63128c  lw          $v1, 0x128C($v1)
    ctx->pc = 0x318770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x318774: 0x2c610033  sltiu       $at, $v1, 0x33
    ctx->pc = 0x318774u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x318778: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x318778u;
    {
        const bool branch_taken_0x318778 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x318778) {
            ctx->pc = 0x3187ACu;
            goto label_3187ac;
        }
    }
    ctx->pc = 0x318780u;
    // 0x318780: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x318780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x318784: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318788: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x318788u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31878c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31878cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318790: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x318790u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x318794: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318798: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x318798u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31879c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31879cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3187a0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3187a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3187a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3187a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3187a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3187a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3187ac:
    // 0x3187ac: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3187acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3187b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3187b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3187b4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3187b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3187b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3187B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3187B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3187C0u;
}
