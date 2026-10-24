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

// Function: entry_002d808c
// Address: 0x2d808c - 0x2d8148
void entry_002d808c_0x2d808c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d808c_0x2d808c");
#endif

    switch (ctx->pc) {
        case 0x2d80ccu: goto label_2d80cc;
        default: break;
    }

    ctx->pc = 0x2d808cu;

    // 0x2d808c: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x2d808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2d8090: 0x24420430  addiu       $v0, $v0, 0x430
    ctx->pc = 0x2d8090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
    // 0x2d8094: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d8094u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d8098: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d8098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d809c: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x2d809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2d80a0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2d80a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2d80a4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d80a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d80a8: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x2d80a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d80ac: 0x3c024402  lui         $v0, 0x4402
    ctx->pc = 0x2d80acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17410 << 16));
    // 0x2d80b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d80b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d80b4: 0x0  nop
    ctx->pc = 0x2d80b4u;
    // NOP
    // 0x2d80b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d80b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d80bc: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2d80bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x2d80c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d80c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d80c4: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x2D80C4u;
    SET_GPR_U32(ctx, 31, 0x2D80CCu);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2D80C4u, 0x2D80CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D80CCu;
label_2d80cc:
    // 0x2d80cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d80ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d80d0: 0x906310a8  lbu         $v1, 0x10A8($v1)
    ctx->pc = 0x2d80d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x2d80d4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D80D4u;
    {
        const bool branch_taken_0x2d80d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d80d4) {
            ctx->pc = 0x2D8148u;
            return;
        }
    }
    ctx->pc = 0x2D80DCu;
    // 0x2d80dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d80dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d80e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d80e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d80e4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d80e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d80e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d80e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d80ec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d80ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d80f0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d80f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d80f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d80f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d80f8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d80f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d80fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d80fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8100: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8100u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8104: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2d8104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d8108: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d810c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d810cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2d8110: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8114: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x2d8114u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8118: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2d8118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d811c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2d811cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d8120: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2d8120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2d8124: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2d8124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d8128: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2d8128u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2d812c: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x2d812cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x2d8130: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2d8130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2d8134: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d8134u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8138: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d813c: 0xe4601b34  swc1        $f0, 0x1B34($v1)
    ctx->pc = 0x2d813cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6964), bits); }
    // 0x2d8140: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2D8140u;
    {
        const bool branch_taken_0x2d8140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8140) {
            ctx->pc = 0x2D8148u;
            return;
        }
    }
    ctx->pc = 0x2D8148u;
}
