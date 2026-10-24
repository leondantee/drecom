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

// Function: entry_0037a368
// Address: 0x37a368 - 0x37a3f8
void entry_0037a368_0x37a368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037a368_0x37a368");
#endif

    ctx->pc = 0x37a368u;

    // 0x37a368: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x37a368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37a36c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37a370: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x37a370u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x37a374: 0x34c25556  ori         $v0, $a2, 0x5556
    ctx->pc = 0x37a374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
    // 0x37a378: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x37a378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37a37c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x37a37cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x37a380: 0x0  nop
    ctx->pc = 0x37a380u;
    // NOP
    // 0x37a384: 0x1010  mfhi        $v0
    ctx->pc = 0x37a384u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x37a388: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x37a388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37a38c: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x37a38cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x37a390: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37a390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37a394: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x37a394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x37a398: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x37a398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x37a39c: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x37a39cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37a3a0: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x37a3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x37a3a4: 0x0  nop
    ctx->pc = 0x37a3a4u;
    // NOP
    // 0x37a3a8: 0x3810  mfhi        $a3
    ctx->pc = 0x37a3a8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x37a3ac: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x37a3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x37a3b0: 0x63a00  sll         $a3, $a2, 8
    ctx->pc = 0x37a3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x37a3b4: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x37a3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x37a3b8: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x37a3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37a3bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x37a3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37a3c0: 0x3c075555  lui         $a3, 0x5555
    ctx->pc = 0x37a3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21845 << 16));
    // 0x37a3c4: 0x34e35556  ori         $v1, $a3, 0x5556
    ctx->pc = 0x37a3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21846);
    // 0x37a3c8: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x37a3c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37a3cc: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x37a3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x37a3d0: 0x0  nop
    ctx->pc = 0x37a3d0u;
    // NOP
    // 0x37a3d4: 0x1810  mfhi        $v1
    ctx->pc = 0x37a3d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x37a3d8: 0x66b021  addu        $s6, $v1, $a2
    ctx->pc = 0x37a3d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x37a3dc: 0x161c00  sll         $v1, $s6, 16
    ctx->pc = 0x37a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x37a3e0: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x37a3e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37a3e4: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x37a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x37a3e8: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x37a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x37a3ec: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x37a3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x37a3f0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x37a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37a3f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37a3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x37a3f8u;
}
