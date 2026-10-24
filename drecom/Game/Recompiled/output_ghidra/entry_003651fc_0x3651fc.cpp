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

// Function: entry_003651fc
// Address: 0x3651fc - 0x3652bc
void entry_003651fc_0x3651fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003651fc_0x3651fc");
#endif

    switch (ctx->pc) {
        case 0x36522cu: goto label_36522c;
        case 0x365248u: goto label_365248;
        default: break;
    }

    ctx->pc = 0x3651fcu;

    // 0x3651fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3651fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365200: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x365200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x365204: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x365208: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x365208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x36520c: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x36520Cu;
    {
        const bool branch_taken_0x36520c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36520c) {
            ctx->pc = 0x365344u;
            return;
        }
    }
    ctx->pc = 0x365214u;
    // 0x365214: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365218: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x365218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36521c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36521cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x365220: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x365220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x365224: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x365224u;
    SET_GPR_U32(ctx, 31, 0x36522Cu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x365224u, 0x36522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36522Cu;
label_36522c:
    // 0x36522c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x36522cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x365230: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x365230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x365234: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x365234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x365238: 0x0  nop
    ctx->pc = 0x365238u;
    // NOP
    // 0x36523c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x36523cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x365240: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x365240u;
    SET_GPR_U32(ctx, 31, 0x365248u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x365240u, 0x365248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365248u;
label_365248:
    // 0x365248: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36524c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x36524cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x365250: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365254: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x365254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x365258: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36525c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x36525cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x365260: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x365260u;
    {
        const bool branch_taken_0x365260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365260) {
            ctx->pc = 0x3652BCu;
            return;
        }
    }
    ctx->pc = 0x365268u;
    // 0x365268: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x365268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36526c: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x36526cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x365270: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x365270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x365274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x365274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x365278: 0x0  nop
    ctx->pc = 0x365278u;
    // NOP
    // 0x36527c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36527cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x365280: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x365280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x365284: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x365284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x365288: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x365288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x36528c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36528cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x365290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x365290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x365294: 0x0  nop
    ctx->pc = 0x365294u;
    // NOP
    // 0x365298: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x365298u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36529c: 0x0  nop
    ctx->pc = 0x36529cu;
    // NOP
    // 0x3652a0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x3652A0u;
    {
        const bool branch_taken_0x3652a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3652a0) {
            ctx->pc = 0x3652BCu;
            return;
        }
    }
    ctx->pc = 0x3652A8u;
    // 0x3652a8: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x3652a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x3652ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3652acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3652b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3652b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3652b4: 0x0  nop
    ctx->pc = 0x3652b4u;
    // NOP
    // 0x3652b8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x3652b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    ctx->pc = 0x3652bcu;
}
