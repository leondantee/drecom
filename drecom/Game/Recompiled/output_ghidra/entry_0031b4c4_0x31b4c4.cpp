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

// Function: entry_0031b4c4
// Address: 0x31b4c4 - 0x31b614
void entry_0031b4c4_0x31b4c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031b4c4_0x31b4c4");
#endif

    ctx->pc = 0x31b4c4u;

    // 0x31b4c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b4c8: 0x8c4312ac  lw          $v1, 0x12AC($v0)
    ctx->pc = 0x31b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b4cc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31b4d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b4d4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31b4d8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31b4dc: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31b4e0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x31b4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b4e4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x31b4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x31b4e8: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x31b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x31b4ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31b4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31b4f0: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x31b4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x31b4f4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x31b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x31b4f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31b4f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b4fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b500: 0x8c4312ac  lw          $v1, 0x12AC($v0)
    ctx->pc = 0x31b500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b504: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31b504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31b508: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b50c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31b510: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31b510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31b514: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31b514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31b518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b51c: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x31b51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x31b520: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x31b520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x31b524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31b524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b528: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b52c: 0x8c4312ac  lw          $v1, 0x12AC($v0)
    ctx->pc = 0x31b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b530: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31b530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31b534: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b538: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31b538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31b53c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31b540: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31b540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31b544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b548: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x31b548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x31b54c: 0x3c024310  lui         $v0, 0x4310
    ctx->pc = 0x31b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17168 << 16));
    // 0x31b550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31b550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b554: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b558: 0x8c4312ac  lw          $v1, 0x12AC($v0)
    ctx->pc = 0x31b558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b55c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31b560: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b564: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31b564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31b568: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31b568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31b56c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31b570: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b574: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x31b574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x31b578: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31b578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31b57c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31b57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b580: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b584: 0x8c4312ac  lw          $v1, 0x12AC($v0)
    ctx->pc = 0x31b584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b588: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31b588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31b58c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b590: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31b590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31b594: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31b594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31b598: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31b598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31b59c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b5a0: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x31b5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x31b5a4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x31b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x31b5a8: 0x3442e6e7  ori         $v0, $v0, 0xE6E7
    ctx->pc = 0x31b5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59111);
    // 0x31b5ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31b5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b5b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b5b4: 0x8c4312ac  lw          $v1, 0x12AC($v0)
    ctx->pc = 0x31b5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b5b8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31b5bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b5c0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31b5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31b5c4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31b5c8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31b5cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b5d0: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x31b5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x31b5d4: 0x3c023f10  lui         $v0, 0x3F10
    ctx->pc = 0x31b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16144 << 16));
    // 0x31b5d8: 0x34429091  ori         $v0, $v0, 0x9091
    ctx->pc = 0x31b5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37009);
    // 0x31b5dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31b5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b5e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b5e4: 0x8c4312ac  lw          $v1, 0x12AC($v0)
    ctx->pc = 0x31b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b5e8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31b5ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b5f0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31b5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31b5f4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31b5f8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31b5fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b600: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x31b600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x31b604: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b608: 0x8c6212b0  lw          $v0, 0x12B0($v1)
    ctx->pc = 0x31b608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4784)));
    // 0x31b60c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31b610: 0xac6212b0  sw          $v0, 0x12B0($v1)
    ctx->pc = 0x31b610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 2));
    ctx->pc = 0x31b614u;
}
